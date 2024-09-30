#include <cassert>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"

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
    context = Context(new ConcreteStrategyB());
    assert(context.executeStrategy(10, 5) == 5);
}

int main() {
    testAddition();
    testSubtraction();
    testChangingStrategy();
    return 0;
}
