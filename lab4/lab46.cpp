#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    int index1=0,index2=0;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int max;
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
                index1 = i+1;
                index2 = j+1;
            }
        }
    }
    
    cout << index1 <<" "<< index2;
}