#include <iostream>
using namespace std;
int main(){
    int a, b;
    int c =0;
    cin >> a;
    for(int i = 0; i < a; i++){
        cin >> b;
        if(b > 0){
            c++;
            
        }
        
    }
    cout << c;
    return 0;
}