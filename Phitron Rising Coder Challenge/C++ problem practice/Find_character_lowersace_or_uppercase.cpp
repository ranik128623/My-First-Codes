#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "enter char : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        //(a-z)-> (97-122)
        cout << "lowercase\n";
    }else{
        //(A-Z)-> (65-90)
        cout << "Uppercase\n";
    }

    char cha;
    cout << "enter char : ";
    cin >> cha;
    if (cha >= 97 && cha <= 122){
        //(a-z)-> (97-122)
        //implicit
        cout << "lowercase\n";
    }else{
        //(A-Z)-> (65-90)
        cout << "Uppercase\n";
    }
    return 0;
}