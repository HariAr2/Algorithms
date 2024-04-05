#include<iostream>
using namespace std;
#include<stdlib.h>
#include<vector>

void scan(int n,vector<int>& arr){
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void subarray(vector<int>arr,int start,int end,int n){
    if(end == n){
        return;
    }
    else if(start>end){
        subarray(arr,0,end+1,n);
    }
    else{
        cout<<"[";
        for(int i=start;i<end;i++){
            cout<<arr[i]<<" ,";
        }
        cout<<arr[end]<<"]"<<endl;
        subarray(arr,start+1,end,n);
    }
    return;
}
void printing(int n,vector<int> arr){
    arr.resize(n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    vector <int> arr;
    cout<< "Enter the number of elements: "<< endl;
    cin>>n;
    cout<<"\nEnter the array elements: "<<endl;
    arr.resize(n);
    scan(n,arr);
    //printing(n,arr);
    cout<<"printing the subarrays: "<<endl;
    subarray(arr,0,0,n);
}