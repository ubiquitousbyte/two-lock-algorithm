#include <iostream>
#include <thread>
#include "LockTwo.h"


LockTwo t;

void increment(int *counter, int thID)
{
    t.lock(thID);
    std::cout << "Thread " << thID << " entered critical section" << std::endl;
    counter++;
    std:: cout << "Thread " << thID << " leaving critical section" << std::endl;
    t.unlock(thID);
}

int main()
{
    int counter = 0;

    std::thread th(increment, &counter, 0);
    std::thread th1(increment, &counter, 1);

    // The threads deadlock, because their execution is not interleaved!
    th.join();
    th1.join();
    return 0;
}
