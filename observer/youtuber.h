#ifndef _YUT_H_
#define _YUT_H_
#include "subject.h"
#include <string>

class Youtuber: public Subject {
    std::string newVid;
    protected:
    std::string getState() override;
    public: 
    void uploadVid(std::string name);
};

#endif