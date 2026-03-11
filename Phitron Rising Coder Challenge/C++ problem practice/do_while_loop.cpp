#include <iostream>
using namespace std;
int main(){

    // while ( 3>5 ){
    //     cout << "Hello World\n";
    // }
    do {
        cout << "Hello world\n";
    }while (3 > 5);

    int n =10;
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;
    return 0;
}