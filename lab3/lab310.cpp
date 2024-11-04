#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a>>b;
    int *arr = new int[a];
    for(int i =0; i<a;i++){
        cin>>arr[i];
    }
    int id=a+1;
    for(int i=0;i<a;i++){
        if(b==arr[i]){
            id=i;
        }
        if(arr[i]<b){
            id=i+1;
        }
        if(id>a){
            id=1;
        }
    }
    cout<< id;
    delete[] arr;
    return 0;
}