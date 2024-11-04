#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    int posi=0;
    int posj=0;
    int max = INT_MIN;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j && max< arr[i][j]){
                    max = arr[i][j] ;
                    posi = i+1;
                    posj = j+1;               
                }   
            }
        }
    cout << "Maximum element is: " << max << " with coordinates: "<< posi<<";"<<posj;
}