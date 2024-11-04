#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cin >> n;
    } while (n < 1 || n > 1000);

    int Zero = 0; 
    
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        while (num > 0) {
            int digit = num % 10;
            if (digit == 0) {
                Zero++;
            }
            num /= 10;
        }
    }
    cout << Zero << endl;

    return 0;
}