#ifndef CONCRETE_STRATEGY_B_H
#define CONCRETE_STRATEGY_B_H

#include "Strategy.h"

class ConcreteStrategyB : public Strategy {
public:
    int doOperation(int a, int b) override {
        return a - b;
    }
};

#endif // CONCRETE_STRATEGY_B_H
