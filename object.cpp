#include<iostream>
using namespace std;

class Demo {
public:
    void show() {
        cout << "Object created" << endl;
    }
};

int main() {
    Demo d;
    d.show();
    return 0;
}
