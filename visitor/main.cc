#include <iostream> 
#include <string>

using namespace std; 

// Element that is being visited classes
class Customer;

class Resturant {
    public:
    virtual void acceptCustomer(Customer &c) = 0;
};

class McDonalds: public Resturant {
    public:
    void acceptCustomer(Customer &c) {
        c.goTo(*this);
    }
};

class Bar: public Resturant {
    public:
    void acceptCustomer(Customer &c) {
        c.goTo(*this);
    }
};

// Visitor Classes

class Customer {
    public:
    virtual void goTo(McDonalds &r) = 0;
    virtual void goTo(Bar &r) = 0;
};

class Kid: public Customer {
    public:
    void goTo(McDonalds &r) override {
        cout << "Kid got a Happy Meal :)" << endl;
    }
    void goTo(Bar &r) override {
        cout << "Kid is under 18 and isn't allowed to eat at the bar." << endl;
    }
};

class Adult: public Customer {
    public:
    void goTo(McDonalds &r) override {
        cout << "The adult got a thicc big Mac" << endl;
    }
    void goTo(Bar &r) override {
        cout << "The adult got some nice alcoholic drinks :)" << endl;
    }
};

int main() {
    Customer *nick = new Kid();
    Customer *alex = new Adult();
    Resturant *md = new McDonalds();
    Resturant *bar = new Bar();
    md->acceptCustomer(*nick);
    md->acceptCustomer(*alex);
    bar->acceptCustomer(*nick);
    bar->acceptCustomer(*alex);
    return 0;
}