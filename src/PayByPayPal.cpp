#include <iostream>
#include <map>
#include "PayByPayPal.h"

PayByPayPal::PayByPayPal() {
    m_paypalDataBase = { {"secret", "hans@web.de"}, {"peter", "peter@web.de"} };
    m_isSignedIn = false;
}

void PayByPayPal::collectPaymentDetails() {
    while (!m_isSignedIn) {
        std::cout << "Enter email: "; std::cin >> m_email;
        std::cout << "Enter password: "; std::cin >> m_password;
        if (verify()) std::cout << "Verified.\n";
        else std::cout << "Incorrect email or password.\n";
    }
}

bool PayByPayPal::pay(int paymentAmount) {
    if (m_isSignedIn) {
        std::cout << "Paying " << paymentAmount << " using PayPal.\n";
        return true;
    }
    return false;
}

bool PayByPayPal::verify() {
    m_isSignedIn = (m_email == m_paypalDataBase[m_password]);
    return m_isSignedIn;
}
