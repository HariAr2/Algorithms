/*
Find the largest three distinct elements in an array
Given an array with all distinct elements, find the largest three elements.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1). 

Input: arr[] = {10, 4, 3, 50, 23, 90}
Output: 90, 50, 23
*/

#include <iostream>
using namespace std;
#include <stdlib.h>

void largest_3(int arr[],int n){
    int first,second,third;
    first = second = third =0;
    if (n < 3){
        cout << "Invalid Output"<< endl;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!= first){
            third = second;
            second = arr[i];
        }
        else if(arr[i]>third && arr[i]!=first && arr[i]!= second){
            third = arr[i];
        }
    }
    cout<<"Three Largest Uniques numbers are:  " << first <<" "<<second<<" "<<third<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest_3(arr,n);
    return 0;
}