#include<iostream>
using namespace std;
class A {
public:
    void showA();
};
class B {
public:
    void showB();
};
class C {
public:
    void showC();
};
void A::showA() {
    cout << "This is class A" << endl;
}
void B::showB() {
    cout << "This is class B" << endl;
}
void C::showC() {
    cout << "This is class C" << endl;
}
int main() {
    A obj1;
    B obj2;
    C obj3;
    obj1.showA();
    obj2.showB();
    obj3.showC();

    return 0;
}
