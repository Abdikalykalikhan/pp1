#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
             cin >> arr[i][j];
        }
    }
    for(int i = 0; i < a; i++) {
        int row = 0;
        for(int j = 0; j < b; j++) {
            row += arr[i][j];

        }
        cout << "The sum of row number" << " " << i + 1 << " " << " is " << row << endl;
    }
     for(int j = 0; j < b; j++) {
        int col = 0;
        for(int i = 0; i < a; i++) {
            col += arr[i][j];

        }
        cout << "The sum of column number" << " " <<  j + 1 << " " << " is " << col << endl;
    }
    return 0;
}