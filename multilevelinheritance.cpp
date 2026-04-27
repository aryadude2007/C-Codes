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
        cout << "This is a car\n";
    }
};
class bus : public car {
public:
    bus() {
        cout << "This is a bus\n";
    }
};

int main() {
    bus obj;
    return 0;
}
