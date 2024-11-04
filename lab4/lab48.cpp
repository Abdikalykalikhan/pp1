#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, min, q;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i < n; i++){
        int sum = 0;
        for(int j=0; j < m; j++){
            sum = sum + arr[0][j];
        }
        if(min > sum){
            min = sum;
            q=i+1;
        }
    }
    cout << q;
}