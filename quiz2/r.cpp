#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin >> a;
    int max=-100;
    int min=100;
    for(int i=0; i < a.size(); i++){
        a[i]-='0';
        if(max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min = a[i];
        }

    }
    cout << max <<" "<< min;
}