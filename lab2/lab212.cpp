#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin >> a;
    for(int b = 0; pow(2,b) <= a; b++){
        cout << pow(2,b) <<" ";
    }
    
    return 0;
}