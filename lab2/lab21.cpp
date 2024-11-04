#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int a;
    cin >> a;
    
    if(a==0)
    {
        cout << "None";
    }
    else if(a % 2 == 0)
    {
        cout << "Even" << endl;
    }

    else
    {
        cout << "Odd";
    }
    
    return 0;
}