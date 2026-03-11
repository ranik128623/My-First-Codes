#include <iostream>
using namespace std;
int main(){
    int n = 8;
    bool isPrime = true;
    //for (int i = 2; i*i <= n; i++)
    for (int i = 2; i <= (n-1); i++) {
        if (n%i==0){ //non prime
            isPrime = false;
            break;
        }
    }
    // isPrime -> true -> prime
    // isPrime -> false -> non prime
    if(isPrime == true) {
        cout << "Prime no\n";
    } else{
        cout << "Non Prime no\n";
    }
    return 0;
}