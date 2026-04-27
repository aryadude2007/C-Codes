#include<iostream>
using namespace std;
class vehicle{
    public:
    vehicle(){
    cout<<"this is a vehicle ";
    }
};
class car : public vehicle{
    public:
    car(){
        cout<<"this vehicle is car";
    }
};
int main(){
    car obj;
    return 0;
}
