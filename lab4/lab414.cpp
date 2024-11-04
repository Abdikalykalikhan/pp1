#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, d=0;
    cin >> n;
    for(int i=1; i < n; i++){
        for(int j=1; j < n; j++){
            if(i%j==0 & j!=1){
                d++;
            }
        }
        if(d==1) {
            cout<< i << " is prime" << endl; 
        }
        d=0;
    }
   
}