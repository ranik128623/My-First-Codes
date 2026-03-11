#include <iostream>
using namespace std;

int main() {
    char grade = 'a';//97
    char Grade = 'A';//64
    int value = grade;
    int Value = Grade;
    cout << value << "\n";
    cout << Value << endl;

    double price = 100.99;
    int NewPrice = (int)price;
    cout << NewPrice << "\n";
    return 0;
}