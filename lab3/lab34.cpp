#include<iostream>
using namespace std;
int main(){ 
    int n, max;
    cin>>n;
    int a[n], i;
    for(i=0; i<n; i++){
        cin>>a[i];
        if (i==0) max=a[i];
        if (a[i]>max) max=a[i];
    }
    for (i=0;i<n;i++) {
        if(max==a[i])
        cout<<i+1;
    }
    return 0;
}