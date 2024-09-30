#ifndef STRATEGY_H
#define STRATEGY_H

class Strategy {
public:
    virtual ~Strategy() = default;
    virtual void doSomething() = 0;
};

#endif // STRATEGY_H
