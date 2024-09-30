#pragma once
#include <string>
#include <map>
#include "PaymentStrategy.h"

class PayByPayPal : public PaymentStrategy {
private:
    std::string m_email, m_password;
    bool m_isSignedIn;
    std::map<std::string, std::string> m_paypalDataBase;

public:
    PayByPayPal();
    void collectPaymentDetails() override;
    bool pay(int paymentAmount) override;

private:
    bool verify();
};
