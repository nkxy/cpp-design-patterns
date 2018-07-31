#include "observer.h"
#include <string>

class Subject;

class Subscriber: public Observer {
   void notify(Subject &whoFrom) override;
};