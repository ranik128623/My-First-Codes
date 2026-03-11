#include <iostream>
using namespace std;

int main(){
    int n = 50;
    int oddSum = 0;

    for (int i = 1; i <= n; i++){
        if (i % 2 != 0) {
            oddSum += i;
        }
    }
    cout << "OddSum = " << oddSum << "\n";

    //unsig while loop
    int x = 50;
    int Oddsum = 0;
    int j = 1;
    while (j <= x){
        if (j%2 != 0){
            Oddsum += j;
        }
        j++;
    }
    cout << "OddSum = " << Oddsum << endl;

    return 0;
}