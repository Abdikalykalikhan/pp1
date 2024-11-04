#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin >> a;
    bool e1 = (a%2 == 1);
    bool e2 = (a%2 == 0 && a >= 2 && a <= 5);
    bool e3 = (a%2 == 1 && a >= 6 && a <= 20);
    bool e4 = (a%2 == 1 && a <= 20);
    
    if(e1 || e3){
        cout << "Super";
    }else if(e2 || e4){
        cout << "Not Super";
    }
    return 0;
}