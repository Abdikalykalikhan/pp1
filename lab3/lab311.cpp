#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int *arr=new int[a];
    for(int i=0;i<a;i++){
        int n;
        cin>> n;
        arr[i]=n;
    }
    int s=0;
    for(int i=0;i<a;i++){
        if(arr[i]==arr[i+1]){
            s++;
        }
        else {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}