#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

int main() {
    Context context;

    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    context.setStrategy(&strategyA);
    context.executeStrategy();

    context.setStrategy(&strategyB);
    context.executeStrategy();

    return 0;
}
