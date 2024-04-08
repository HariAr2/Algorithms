#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
//Print array after it is right rotated K times
void roatate(int arr[],int d,int n){
    d=d%n;
    for(int i=0;i<n;i++){
        if(i<d){
            cout<< arr[n+i-d]<< " ";
        }
        else{
             cout<< arr[i-d] << " ";
        }
        
    }
    cout<<"\n";
}
int main(){
    int n,d;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number of right rotate: ";
    cin>>d;
    roatate(arr,d,n);
}