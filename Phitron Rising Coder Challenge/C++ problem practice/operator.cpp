#include <iostream>
using namespace std;

int main() {
    //Arithmetic Operator
    int a = 15, b = 10;
    // int sum = a + b;
    // cout << "sum = " << sum << "\n";
    cout << "sum = " << (a+b) << endl;
    cout << "difference = " << (a-b) << endl;
    cout << "product = " << (a*b) << endl;
    cout << "division = "<< (a/b)<< endl;
    cout << "modulo = " << (a%b) << endl;//reminder
    int x = 45;
    float y = 8;
    cout << (x / y) << "\n";//double & float er kaj same ekta 8 byte arekhta 4 byte 
    cout << (36 / (double)7) << endl;
    int ans = (80 / (double)9);
    cout << ans << endl;
    //Relational Operator
    cout << (4 < 6) << endl; // true -> 1
    cout << (4 > 6) << endl;//false -> 0
    cout << (4 <= 4) << endl; // true -> 1
    cout << (4 == 4) << endl; // true -> 1
    cout << (4 == 5) << endl;//false -> 0
    cout << (4 != 4) << endl; // false -> 0
    cout << (4 != 5) << endl;// true -> 1
    //Logical Operator
    cout << !(3 < 5) << endl;// NOT(!) operator true -> false , false -> true
    cout << (( 3 < 1) || (3 < 5)) << endl;//OR(||) operator jekono ekta true holei answer true(1) hobe
    cout << (( 3 < 1) || (3 > 5)) << endl;
    cout << (( 3 < 1) && (3 < 5)) << endl;//AND(&&) operator jekono ekta false holei answer false(0) hobe
    cout << (( 3 > 1) && (3 < 5)) << endl;

    return 0;
}