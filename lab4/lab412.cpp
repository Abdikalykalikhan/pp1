#include <iostream>
using namespace std;
int main() {
    int num1,num2,num3,min,min1;
    int d,f=0;
    int sum=0;
    cin>>num1>>num2;
    int a,s=0;
    int array[num1][num2];
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            cin>>array[i][j];
        }
    }
    cout<<"coordinates of min elements: "<<endl;
    min1=min;
    min=array[a][s];
    for(int j=0;j<num2;j++){
        for(int i=0;i<num1;i++){
           if( min>array[i][j]){
               min=array[i][j];
               a=i;
               s=j;
            }
        }
        if(min1==min){
             cout<<a+1<<";"<<s+1<<endl;
             
        s+=1;
        sum=sum+min;
        min=array[0][s];
        continue;
        }
        cout<<a+1<<";"<<s+1<<endl;
        sum=sum+min;
        s+=1;
        min=array[0][s];
    }
    cout<<endl;
    cout<<"Their sum:"<<endl;
    cout<<sum;
    
    return 0;
}