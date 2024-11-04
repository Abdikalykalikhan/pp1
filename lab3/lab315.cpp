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
    int tmp;
    for(int i = 0;i<a;i++){
        for(int j = (a-1);j>=(i+1);j--){
            if(arr[j]<arr[j-1]){
                tmp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=tmp;
            }
        }
    }
    for(int i=a-1;i>=0;i--){
        cout<<arr[i]<< " ";
    }
    delete[] arr;
    return 0;
}