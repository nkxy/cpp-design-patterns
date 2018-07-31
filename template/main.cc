#include <iostream>
#include <string> 

using namespace std;

class PFCTeam {
    virtual void getPL() = 0;
    virtual void getDesigner() = 0;
    virtual void getCodeMonkeys() = 0;
    virtual void getTerm() = 0;
    public: 
    void createTeam() { //public template function
        getTerm();
        getPL();
        getDesigner();
        getCodeMonkeys();
    }
};

class Spring2018: public PFCTeam {
    void getTerm() override {
        cout << "Spring 2018 PFC:" << endl << endl;
    }
    void getPL() override {
        cout << "PL is Gautam" << endl;
    }
    void getDesigner() override {
        cout << "Designer is Joslyn" << endl;
    }
    void getCodeMonkeys() override {
        cout << "Monkeys are Nick, Xinhao, Clayton, and Ahmed" << endl;
    }
};

class Fall2018: public PFCTeam {
    void getTerm() override {
        cout << "Fall 2018 PFC:" << endl << endl;
    }
    void getPL() override {
        cout << "PL is hopefully Gautam" << endl;
    }
    void getDesigner() override {
        cout << "Designer is Joslyn" << endl;
    }
    void getCodeMonkeys() override {
        cout << "Monkeys are Nick, Xinhao, Clayton, Ahmed, and one more :o" << endl;
    }
};

int main () {
    PFCTeam *spring = new Spring2018();
    spring->createTeam();
    PFCTeam *fall = new Fall2018();
    fall->createTeam();
    return 0;
}