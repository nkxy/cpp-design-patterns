#include "park.h"

class AddOn: public Park {
protected:
    Park *park;
public:
    AddOn(Park *park);
};
