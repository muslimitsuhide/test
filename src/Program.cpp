#include <iostream>
#include "PayByCreditCard.h"
#include "PayByPayPal.h"

int main() {
    PaymentStrategy* strategy;

    strategy = new PayByCreditCard();
    strategy->collectPaymentDetails();
    strategy->pay(100);

    strategy = new PayByPayPal();
    strategy->collectPaymentDetails();
    strategy->pay(200);

    delete strategy;
    return 0;
}
