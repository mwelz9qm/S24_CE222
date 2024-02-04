//test counter

#include <iostream>
#include "counterType.h"

using namespace std;

int main()
{
    counterType myCounter(50);
    //check the counter initialized properly

    cout << "My counter value is: " << myCounter.getCounter() << endl;

    //check increment
    myCounter.increment();
    myCounter.increment();
    cout << "My counter value is: " << myCounter.getCounter() << endl;
    //check decrement
    myCounter.decrement();
    cout << "My counter value is: " << myCounter.getCounter() << endl;
    //check set counter
    myCounter.setCounter(1);
    cout << "My counter value is: " << myCounter.getCounter() << endl;
    //check it sets to 0 for negative input
    myCounter.setCounter(-1);
    cout << "My counter value is: " << myCounter.getCounter() << endl;
    myCounter.decrement();
    cout << "My counter value is: " << myCounter.getCounter() << endl;
    return 0;
}