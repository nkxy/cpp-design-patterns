#include <string>
#include <iostream>

using namespace std;

class Student; 

class University {
    public:
    virtual Student *createStudent() = 0;
};

class Student {
    public: 
    virtual void printName() = 0;
};

class Math: public Student {
    public:
    void printName() override {
        cout << "Mathie student made" << endl;
    }
};

class Art: public Student {
    public:
    void printName() override {
        cout << "Arts student made" << endl;
    }
};

class Engineering: public Student {
    public:
    void printName() override {
        cout << "Engineering student made" << endl;
    }
};

class Waterloo: public University {
    public:
    Student *createStudent() override {
        return new Math();
    }
};

class MIT: public University {
    public:
    Student *createStudent() override {
        return new Engineering();
    }
};

class Toronto: public University {
    public:
    Student *createStudent() override {
        return new Art();
    }
};

int main() {
    University *uni = new Waterloo();
    uni->createStudent()->printName();
    return 0;
}