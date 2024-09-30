#ifndef CONCRETE_STRATEGY_B_H
#define CONCRETE_STRATEGY_B_H

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyB : public Strategy {
public:
    void doSomething() override {
        std::cout << "Executing strategy B" << std::endl;
    }
};

#endif // CONCRETE_STRATEGY_B_H
