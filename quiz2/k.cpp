#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int posi;
    int posj;
    for(int i=0; i < n; i++){
        int max=0;
        for(int j=0; j < n; j++){
            if(max < arr[i][j]){
                max=arr[i][j];
                posi=i;
                posj=j;
                
            }
        }
        
    }
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << arr[posi][posj]<<" ";
        }
        cout <<endl;
    }
    
}