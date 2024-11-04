#include <iostream>
using namespace std;

int main(){
    int n, l, r;
    cin>>n>>l>>r;
    int *arr=new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a=r-1;
    for(int i=0;i<n;i++){
        if((i+1)<l){
            cout<<arr[i]<<" ";
        }
        else if(l<=(i+1) && (i+1)<=r){
            cout<<arr[a]<<" ";
            a--;
        }
        else if(i+1>r){
            cout<<arr[i]<<" ";
        }
    }
}