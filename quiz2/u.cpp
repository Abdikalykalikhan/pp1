#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    int a=0, b=0;
    int sumeven=0;
    int sumodd=0;
    for(int i=0; i < n; i++){
        if(arr[i]%2==0){
            a++;
            sumeven+=arr[i];
        }
        if(arr[i]%2==1){
            b++;
            sumodd+=arr[i];
        }
    }
    
    cout << "Left hand magic power: " << a*sumeven;
    cout << endl;
    cout << "Right hand magic power: "<< b*sumodd;
}