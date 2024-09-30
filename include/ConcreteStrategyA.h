#ifndef CONCRETE_STRATEGY_A_H
#define CONCRETE_STRATEGY_A_H

#include "Strategy.h"
#include <iostream>

class ConcreteStrategyA : public Strategy {
public:
    void doSomething() override {
        std::cout << "Executing strategy A" << std::endl;
    }
};

#endif // CONCRETE_STRATEGY_A_H
