#include <iostream>

using namespace std;
int main(){
    int arr[1000000];
    int max;
    int b;
    cin >> b;
    for(int i = 0; i < b; i++){
       cin>> arr[i];
       max = arr[0];
    }
    for(int i = 1; i < b; i++){
        if( max < arr[i]){
            max = arr[i];
        }
    }
    cout << max;
    return 0;
    
}