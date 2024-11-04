#include<iostream>
using namespace std;
int main()
{ 
    int n, max, min;
    cin>>n;
    int a[n], i;
    for(i=0; i<n; i++){
        cin>>a[i];
        if (i==0) max=a[i];
        if (a[i]>max) max=a[i];
        if (i==0) min=a[i];
        if (a[i]<min) min=a[i];
    }
        for (i=0;i<n;i++) {
        if(max==a[i]) a[i]=min;
        cout<<a[i]<<" ";
    }
    return 0;
}