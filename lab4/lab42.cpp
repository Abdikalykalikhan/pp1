#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, max, secmax;
    cin >> a;
    int arr[a][a];
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            cin  >> arr[i][j];
        }
    }

    max = arr[0][0];
    secmax = INT_MIN;

     for(int i = 0; i < a; i++) {
        for(int j = 0; j < a; j++) {
            if(max < arr[i][j]) {
                secmax = max;
                max = arr[i][j];
            } else if( secmax < arr[i][j] and arr[i][j] < max) {
                secmax = arr[i][j];
            }
        }
    }
    if(secmax == INT_MIN) {
        cout << "0" << endl;
       
    } else cout << secmax << endl;

}