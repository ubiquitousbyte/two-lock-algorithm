//
// Created by nas on 05.11.20.
//

#include "LockTwo.h"

void LockTwo::lock(uint8_t thread)
{
    victim = thread; // I'm allowing the other thread to access the critical region before me
    while (victim == thread) {} // Wait
}

void LockTwo::unlock(uint8_t thread) {}