#include <iostream>
using namespace std;
int main(){
    unsigned a;
    unsigned b;
    cin >> a ;
    cin >> b ;
    unsigned res = a&b;
    cout << (int)res ;
    return 0;
}