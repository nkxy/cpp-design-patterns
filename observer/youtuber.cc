#include "youtuber.h"
#include <string> 

using namespace std;

string Youtuber::getState() {
    return newVid;
}

void Youtuber::uploadVid(string name) {
    newVid = name;
}