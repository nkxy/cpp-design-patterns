#include "youtuber.h"
#include "subscriber.h"
#include <iostream>

using namespace std;

int main()
{
    Youtuber CGPGrey {};
    Subscriber nick {};
    Subscriber tom {};
    Subscriber justin {};
    CGPGrey.attachObserver(&nick);
    CGPGrey.attachObserver(&justin);
    CGPGrey.uploadVid("death to pennies");
    CGPGrey.attachObserver(&tom);
    CGPGrey.uploadVid("Hello Internet");
}
