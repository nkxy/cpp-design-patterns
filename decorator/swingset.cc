#include "swingset.h"

int SwingSet::price() {
    return park->price() + 1000;
}

SwingSet::SwingSet(Park *park): AddOn {park} {}