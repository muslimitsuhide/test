#pragma once
#include <memory>
#include "PaymentStrategy.h"
#include "CreditCard.h"

class PayByCreditCard : public PaymentStrategy {
private:
    std::unique_ptr<CreditCard> m_card;

public:
    PayByCreditCard();
    void collectPaymentDetails() override;
    bool pay(int paymentAmount) override;

private:
    bool cardIsPresent();
};
