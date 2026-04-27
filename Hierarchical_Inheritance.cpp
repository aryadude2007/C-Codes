#include<iostream>
using namespace std;
class vehicle {
public:
    vehicle() {
        cout << "This is a vehicle\n";
    }
};
class car : public vehicle {
public:
    car() {
        cout << "This vehicle is a car\n";
    }
};
class bus : public vehicle {
public:
    bus() {
        cout << "This vehicle is a bus\n";
    }
};

int main() {
    car c;
    cout << endl;
    bus b;
    return 0;
}
