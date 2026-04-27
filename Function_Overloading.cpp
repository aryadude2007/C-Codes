#include<iostream>
using namespace std;
class Add {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    float add(float a, float b) {
        return a + b;
    }
};
int main() {
    Add obj;
    cout << "Sum of 2 integers: " << obj.add(2, 3) << endl;
    cout << "Sum of 3 integers: " << obj.add(2, 3, 4) << endl;
    cout << "Sum of 2 floats: " << obj.add(2.5f, 3.5f) << endl;
    return 0;
}
