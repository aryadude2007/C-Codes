#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks[10], total, percentage;
    int n;

public:
    void getData() {
        cout << "\nEnter Roll Number: "; cin >> rollNo;
        cout << "Enter Name: "; cin >> name;
        cout << "Enter number of subjects: "; cin >> n;
        total = 0;
        for(int i=0; i<n; i++) {
            cout << "Enter marks for subject " << i+1 << ": ";
            cin >> marks[i];
            total += marks[i];
        }
    }

    void calculate() {
        percentage = total / n;
    }

    void display() {
        cout << "\nRoll No: " << rollNo << "\nName: " << name;
        cout << "\nPercentage: " << percentage << "%" << endl;
    }
};

int main() {
    int num;
    cout << "Enter number of students: "; cin >> num;
    Student s[num];
    for(int i=0; i<num; i++) {
        s[i].getData();
        s[i].calculate();
        s[i].display();
    }
    return 0;
}
