#include <iostream>
using namespace std;

int main () {
    int age = 34;
    char star = '*';
    char grade = 'A';
    float PI = 3.14f;
    bool isSafe = false; //true-> 1 & false-> 0
    double price = 100.99;
    cout << isSafe << endl;
    cout << age << "\n";
    cout << sizeof(age) << "\n";
    string name;
    cout << "Enter your name : ";
    cin >> name;
    cout << "Your name is : " << name;
    return 0;
}