#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main () {
    int a, b;
    cin >> a >> b;

    int arr[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    
     for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++) {
            int z;
            z = sqrt(arr[i][j]);

            if(pow(z,2) == arr[i][j]) {
                arr[i][j] = z;
            } else arr[i][j] = arr[i][j];
        }
    }
     for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++) {
            cout << arr[i][j] << " ";
        } 
        cout << endl;
    }

}