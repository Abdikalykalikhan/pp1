#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            cin >> arr[i][j];
        }
    }
    int q;
    cin >> q;
    int max=0;
    for(int i=0; i < a; i++){
        for(int j=0; j < b; j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    if(max > q){
        cout << "Penalty!";
    }else{
        cout <<"No penalty for today.";
    }
}