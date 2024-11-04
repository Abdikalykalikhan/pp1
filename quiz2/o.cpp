#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    string a;
    cin >> a;
    reverse( a.begin(), a.end() );
    int s;
    for(int i=0; i < a.size(); i++){
        a[i] = a[i] -'0';
        a[i]=s;
        cout << s;
    }    
}