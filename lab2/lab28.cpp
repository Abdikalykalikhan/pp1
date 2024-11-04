#include <iostream>
using namespace std;
int main(){
    int a, c;
    int z, k;
        z = 0;
        k = 0;
        cin >> a;
    for(int i = 0; i < a; i++){
        cin >> c;
        if(c % 2 == 0){
            z++;
        }else if(c % 2 == 1)
            k++;
        
                 
        }cout << z << "  " << k;

    
}