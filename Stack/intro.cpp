#include<stack>
#include<stdlib.h>
#include<iostream>
#include<stdio.h>
using namespace std;

//BASIC STACK FUNCTIONS 

int main(){
    stack<int> stack_one;
    int n;
    int m=0;
    cout<<"Values in Stack"<<endl;
    cin>>n;
    cout<<"Values for stack 1: "<<endl;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        stack_one.push(num);
    }
    cout<<"Stack 2 Values: "<<endl;
    stack<int> stack_two;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        stack_two.push(num);
    }
    //cout<<stack_one.top();
    int sum = 0;
    cout<<"Printing stack 1"<<endl;
    while(!stack_one.empty()){
        cout<<stack_one.top()<<endl;
        sum+=stack_one.top();
        stack_one.pop();
    }
    cout<<"sum of values in stack 1= "<<sum<<endl;

    stack_one.swap(stack_two);
    int sum_1 = 0;
    cout<<"Stack 1 Values after swap: "<<endl;
     while(!stack_one.empty()){
        cout<<stack_one.top()<<endl;
        sum_1+=stack_one.top();
        stack_one.pop();
    }
    cout<<sum_1;
    
}


/*
Functions used:

push 
pop
emplace
top
empty
swap


*/