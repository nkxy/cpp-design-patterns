#include "parkaddons.h"

class SwingSet: public AddOn {
    public:
    int price() override; 
    SwingSet(Park *park);
};