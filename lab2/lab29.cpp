#include <iostream>
using namespace std;
int main(){
    int a, b;
    int c;
    cin >> a;
    c=0;
    for(int i = 0; i < a; i++)
    {
        cin >> b;
        if(b % 10 == 7){
            c++;
        }
    }
    cout << c;
    return 0;
}