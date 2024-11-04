#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int arr[a][b];
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            cin >> arr[i][j];
        }
    }
    int max=0;
    for(int i=0; i < a; i++){
        int sum=0;
        for(int j=0; j < b; j++){
            sum += arr[i][j];
        }
        if(max < sum){
            max=sum;
        }    
    }   
    cout << max <<" ";
}