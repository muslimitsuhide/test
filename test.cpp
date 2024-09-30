#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include <cassert>

void testAddition() {
    Context context(new ConcreteStrategyA());
    assert(context.executeStrategy(10, 5) == 15);
}

void testSubtraction() {
    Context context(new ConcreteStrategyB());
    assert(context.executeStrategy(10, 5) == 5);
}

void testChangingStrategy() {
    Context context(new ConcreteStrategyA());
    assert(context.executeStrategy(10, 5) == 15);
    context.setStrategy(new ConcreteStrategyB());
    assert(context.executeStrategy(10, 5) == 5);
}

int main() {
    testAddition();
    testSubtraction();
    testChangingStrategy();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
