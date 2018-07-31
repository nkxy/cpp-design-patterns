#include "subject.h"
#include <vector> 
#include "observer.h"

using namespace std;

void Subject::notifyObservers() {
    for (auto &ob: observers) {
        ob->notify(*this);
    }
}

void Subject::attachObserver(Observer *obs) {
    observers.emplace_back(obs);
}

void Subject::detachObservers(){
    observers.clear();
}
