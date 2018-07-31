#include "subscriber.h"
#include "youtuber.h"
#include <iostream>

using namespace std;


void Subscriber::notify(Subject &whoFrom) {
    cout << "A subscriber has just received a notification about the publishing of the video "<< whoFrom.getState() << endl;
}