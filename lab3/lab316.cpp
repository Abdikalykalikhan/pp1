#include <iostream>
#include <math.h>
using namespace std;
 
void check(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}
 

int main()
{
    int n;
    cin>>n;
    check(n);
    return 0;
}