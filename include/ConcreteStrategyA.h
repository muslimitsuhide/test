#ifndef CONCRETE_STRATEGY_A_H
#define CONCRETE_STRATEGY_A_H

#include "Strategy.h"

class ConcreteStrategyA : public Strategy {
public:
    int doOperation(int a, int b) override {
        return a + b;
    }
};

#endif // CONCRETE_STRATEGY_A_H
