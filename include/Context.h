#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

class Context {
public:
    Context(Strategy* strategy) : strategy_(strategy) {}

    int executeStrategy(int a, int b) {
        return strategy_->doOperation(a, b);
    }

private:
    Strategy* strategy_;
};

#endif // CONTEXT_H
