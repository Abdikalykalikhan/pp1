#include <iostream>
using namespace std;
int main(){
    long long  a ;
    cin >> a;
    long long  b[a];
    long long c = 0;
    
    for(int i = 0; i < a; i++){
        cin >> b[i];
        
    }
    for(int i = 0; i < a; i++){
        c += b[i];
    }
    cout << c;
    
}