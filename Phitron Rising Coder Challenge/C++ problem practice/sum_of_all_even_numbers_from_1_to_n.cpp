#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int Evensum = 0;
    for (int i = 1; i <= n ; i++){
        if (i % 2 == 0){
            Evensum += i;
        }
    }
    cout << "EvenSum = " << Evensum << endl;
    return 0;
}