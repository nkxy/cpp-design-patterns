#include "swingset.h"
#include <iostream>
#include "basepark.h"

using namespace std;

int main()
{
    Park *basepark = new BasePark();
   cout << "Base Park Price is " << basepark->price() << endl;
   Park *swingpark = new SwingSet(basepark);
   cout << "SwingSet Park Price is " << swingpark->price() << endl;
   return 0;
}
