#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 1;
    int arr[n][n];
    int m = n;
    int j = 0;
    int l = 0;
    while(a <= n*n) {
        for(int i = l; i < m; i++) {
            arr[j][i] = a;
            a++;
        }
        for(int i = l + 1; i < m; i++) {
            arr[i][m - 1] = a;
            a++;
        }
        for(int i = m - 2; i >= l; i--) {
            arr[m-1][i] = a;
            a++;
        }
        for(int i = m - 2; i > l; i--) {
            arr[i][j] = a;
            a++;
        }
        m--;
        j++;
        l++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
            if(j == n - 1) {
                cout << endl;
            }
        }
    }
}
