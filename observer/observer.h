#ifndef _OBS_H_
#define _OBS_H_
#include <string>

class Subject;

class Observer {
    public:
    virtual void notify(Subject &whofrom) = 0;
};

#endif