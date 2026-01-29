#include <iostream>
using namespace std;

class Father {
public:
    virtual void show() {
        cout << "Father class show()" << endl;
    }
};

class Child : public Father {
public:
    void show() {
        cout << "Child class show()" << endl;
    }
};

int main() {
    Father* f;
    Child c;
    f = &c;

    f->show();
    return 0;
}