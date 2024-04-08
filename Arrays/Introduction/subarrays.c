//subarrys from an array in c

#include<stdio.h>
void scan(int n,int arr[n]){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void print(int n,int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }    
}
void subarray(int n,int start,int end,int arr[n]){
    if(end == n){
        return;
    }
    else if(start>end){
        subarray(n,0,end+1,arr);
    }
    else{
        printf("[");
        for(int i=start;i<end;i++){
            printf("%d",arr[i]);
        }
        printf("%d]\n",arr[end]);
        subarray(n,start+1,end,arr);
    }
    return;
}

int main(){
    int n;
    printf("No of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    scan(n,arr);
    //print(n,arr);
    subarray(n,0,0,arr);
}