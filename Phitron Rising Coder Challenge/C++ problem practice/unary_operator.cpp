#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = a++;//kaj ; update; post increment operator
    cout << "a = " << a << endl;//11
    cout << "b = " << b << endl;//10
    cout << "a = " << a << endl;//11
    int x = 11;
    int y = ++x;//update; kaj; pre increment operator
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    int p = 6;
    int q = p--;//post decrement
    cout << "q = " << q << endl;
    cout << "p = " << p << endl;
    int s = 7;
    int t = --s;//pre decrement
    cout << "t = " << t << endl;
    cout << "s = " << s << endl;
    return 0;

}