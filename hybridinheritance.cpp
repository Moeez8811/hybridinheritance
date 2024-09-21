#include <iostream>
using namespace std;	
class teacher {
protected:
    void id() {
        cout << "9089" << endl;
    }
};

class student : public teacher {
public:
    void show() {
        id();
    }
protected:
    void result() {
        cout << "pass" << endl;
    }
};

class jstudent : public teacher {
public:
    void dep() {
        cout << "IT" << endl;
    }

    void degree() {
        cout << "BS IT" << endl;
    }
};

class subject : public student, public jstudent {
public:
    void showers() {
        result();
    }

    void oop() {
        cout << "oop" << endl;
    }
};

int main() {
    subject X;
    X.student::show();
    X.showers();
    X.degree();
    X.oop();
}
