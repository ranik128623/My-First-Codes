#include <iostream>
using namespace std;

int main() {
    int n = -45;

    if (n >= 0) {
        cout << "n is positive\n";

    }
    else {
        cout << "n is negetiv\ne";
    }

    int age;
    cout << "enter your age : ";
    cin >> age;
    if (age >= 18) {
        cout << "You can vote\n";
    } 
    else {
        cout << "You can't vote\n";
    }
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (num%2 == 0){
        cout << "Your number is Even\n";
        cout << "bye\n";
    }
    else {
        cout << "Your number is Odd\n";
    }
    int Num;
    cout << "Enter a number : ";
    cin >> Num;
    if (Num%2 != 0){
        cout << "Your number is Odd\n";
    }
    else {
        cout << "Your number is Even\n";
    }
    //marks -> if, else if, else

    int marks;
    cout << "Enter your marks : ";
    cin >> marks;

    if (marks >= 90){
        cout << "A\n";
    }
    else if (marks >= 80 && marks < 90) {
        cout << "B\n";
    }
    else {
        cout << "C\n";
    }

    return 0;
}