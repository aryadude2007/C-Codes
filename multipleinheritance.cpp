#include<iostream>
using namespace std;
class landvehicle{
public:
void landinfo(){
    cout<<"this is land vehicle ";
}
};
class watervehicle{
    public:
    void waterinfo(){
        cout<<"this is watervehicle";
    }
};
class amphibiousvehicle:public landvehicle,public watervehicle{
    public:
    amphibiousvehicle(){
cout<<"his is amphibious vehicle";
    }
};
int main(){
    amphibiousvehicle obj;
    obj.waterinfo();
    obj.landinfo();
    return 0;
}
