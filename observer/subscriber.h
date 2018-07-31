#include "observer.h"

class Subject;

class Subscriber: public Observer {
   void notify(Subject &whoFrom) override;
};