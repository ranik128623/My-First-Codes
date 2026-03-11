#include <iostream>
using namespace std;

int main(){
    //while loop
    int n = 40;
    int count = 1;
    while (count <= n) {
    //while (count <= 54)    
        cout << count << " ";
        //count = count + 1;
        //count += 1;
        count++;
    }
    cout << endl;
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << "\n";
    //for loop
    int x = 30;
    for(int j = 1; j <= x; j = j+2){
        cout << j << " ";
    }
    cout << endl;
    
    return 0;
    
}