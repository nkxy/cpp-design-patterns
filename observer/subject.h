#ifndef _SUBJECT_H_
#define _SUBJECT_H_
#include <vector>
#include <string>

class Observer; 
class Subject {
    std::vector<Observer *> observers; 
    public: 
    void notifyObservers();
    void attachObserver(Observer * obs);
    void detachObservers();
    virtual std::string getState() = 0;
};

#endif 