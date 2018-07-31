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
    void acceptCustomer(Customer &c);
};

class Bar: public Resturant {
    public:
    void acceptCustomer(Customer &c);
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
        r = r; //prevent error in compiler for not using r
        cout << "Kid got a Happy Meal :)" << endl;
    }
    void goTo(Bar &r) override {
        r = r;
        cout << "Kid is under 18 and isn't allowed to eat at the bar." << endl;
    }
};

class Adult: public Customer {
    public:
    void goTo(McDonalds &r) override {
        r = r;
        cout << "The adult got a thicc big Mac" << endl;
    }
    void goTo(Bar &r) override {
        r = r;
        cout << "The adult got some nice alcoholic drinks :)" << endl;
    }
};

void McDonalds::acceptCustomer(Customer &c){
    c.goTo(*this);
}

void Bar::acceptCustomer(Customer &c){
    c.goTo(*this);
}


int main() {
    Customer *nick = new Kid();
    Customer *alex = new Adult();
    Resturant *md = new McDonalds();
    Resturant *bar = new Bar();
    cout << "Nick is going to McDonalds" << endl;
    md->acceptCustomer(*nick);
     cout << "Alex is going to McDonalds" << endl;
    md->acceptCustomer(*alex);
     cout << "Nick is going to a bar" << endl;
    bar->acceptCustomer(*nick);
     cout << "Alex is going to a bar" << endl;
    bar->acceptCustomer(*alex);
    return 0;
}