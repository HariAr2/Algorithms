#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>
//Program for array left rotation by d positions.
void left_rotate(int arr[],int d,int n){
    int temp[n];
    int k=0;
    for(int i=d;i<n;i++){
        temp[k] = arr[i];
        k++;
    }
    for(int i=0;i<d;i++){
        temp[k] = arr[i];
        k++;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i];
    }
}

int main(){
    int n,d;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of d: ";
    cin>>d;
    left_rotate(arr,d,n);
}