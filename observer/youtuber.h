#ifndef _YUT_H_
#define _YUT_H_
#include "subject.h"
#include <string>

class Youtuber: public Subject {
    std::string newVid;
    public: 
    std::string getVideo() const; 
};

#endif