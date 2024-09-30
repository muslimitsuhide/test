#include <iostream>
#include <string>
#include <memory>
#include "PayByCreditCard.h"
#include "CreditCard.h"

PayByCreditCard::PayByCreditCard() : m_card(nullptr) {}

void PayByCreditCard::collectPaymentDetails() {
    std::string number, date, cvv;
    std::cout << "Enter the card number: "; std::cin >> number;
    std::cout << "Enter the expiration date 'mm/yy': "; std::cin >> date;
    std::cout << "Enter the CVV: "; std::cin >> cvv;
    m_card = std::make_unique<CreditCard>(number, date, cvv);
    m_card->setValid(true);
}

bool PayByCreditCard::pay(int paymentAmount) {
    if (cardIsPresent()) {
        std::cout << "Paying " << paymentAmount << " using Credit Card\n";
        return m_card->charge(paymentAmount);
    }
    return false;
}

bool PayByCreditCard::cardIsPresent() {
    return m_card && m_card->isValid();
}
