#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>

class Observer; 
class Subject {
    std::vector<Observer *> observers; 
    public: 
    void notifyObservers();
    void attachObserver(Observer * obs);
    void detachObservers();
};

#endif 