#ifndef CONTEXT_H
#define CONTEXT_H

#include "Strategy.h"

class Context {
public:
    void setStrategy(Strategy* strategy) {
        this->strategy = strategy;
    }

    void executeStrategy() {
        if (strategy) {
            strategy->doSomething();
        } else {
            throw std::runtime_error("Strategy not set!");
        }
    }

private:
    Strategy* strategy = nullptr;
};

#endif // CONTEXT_H
