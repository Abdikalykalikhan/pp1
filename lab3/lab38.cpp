#include<iostream>
using namespace std;
int main()
{   int n, l, r;
    long sum=0;
    cin>>n>>l>>r;
    int a[n], i;
    for(i=0; i<n; i++){
        cin>>a[i];
        if(i<=r-1 && l-1<=i) 
        sum=sum+a[i];
    }

    cout<<sum;
    return 0;
}