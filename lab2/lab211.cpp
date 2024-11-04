#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    for(b = 1;  b * b <= a; b++){
        cout << b*b << endl;
       }
   
    return 0;
}