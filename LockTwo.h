//
// Created by nas on 05.11.20.
//

#ifndef TWO_LOCK_ALGORITHM_LOCKTWO_H
#define TWO_LOCK_ALGORITHM_LOCKTWO_H


#include <cstdint>
#include <iostream>


class LockTwo {
private:
    volatile uint8_t victim = 0;
public:
    void lock(uint8_t thread);
    void unlock(uint8_t thread);
};


#endif //TWO_LOCK_ALGORITHM_LOCKTWO_H
