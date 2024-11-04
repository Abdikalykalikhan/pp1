#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    int q;
    cin >> q;
    if(q==1){
        for(int i=a; a*a <= b; a++){
        cout <<a*a<< " ";
    }
    }else if(q==-1){
        for(int i=b; a*a >= i; a--){
            cout <<a*a << " ";
        }
    }
    
}