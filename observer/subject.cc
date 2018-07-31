#include "subject.h"
#include <vector> 
#include "observer.h"

using namespace std;

void Subject::notifyObservers() {
    for (auto &ob: observers) {
        ob->notify(*this);
    }
}