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
class bus : public vehicle {
public:
    bus() {
        cout << "This is a bus\n";
    }
};
class busfare : public bus {
public:
    busfare() {
        cout << "Bus fare is calculated\n";
    }
};

int main() {
    busfare obj;   
    return 0;
}
