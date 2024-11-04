#include <iostream>
using namespace std;

int main()
{
    int a=1, b;
    long s=0;
    for(int i=0; i<a; i++){
        cin>>b;
        s+=b;
        a++;
        if(cin.get()=='\n'){
            cout<<s;
            return 0;
        }
    }
}