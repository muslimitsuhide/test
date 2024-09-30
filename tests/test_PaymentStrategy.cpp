#include <gtest/gtest.h>
#include "PayByCreditCard.h"
#include "PayByPayPal.h"

TEST(PayByCreditCardTest, PaySuccess) {
    PayByCreditCard payment;
    payment.collectPaymentDetails();
    EXPECT_TRUE(payment.pay(100));
}

TEST(PayByPayPalTest, PaySuccess) {
    PayByPayPal payment;
    payment.collectPaymentDetails();
    EXPECT_TRUE(payment.pay(200));
}

TEST(PayByPayPalTest, VerifyLoginFailure) {
    PayByPayPal payment;
    EXPECT_FALSE(payment.pay(200));
}
