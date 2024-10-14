#include<iostream>
#include<stack>
#include<vector>
#include<stdlib.h>
#include<iterator>
using namespace std;
int main(){
    vector<int> first_vector;
    for(int i=1;i<6;i++){
        first_vector.push_back(i);
    }

    vector<int>::iterator ptr = first_vector.begin();
    vector<int>::iterator ftr = first_vector.end();

    cout<<"ftr = "<< *ftr<<endl;
    auto it = next(ptr,3);
    auto it1 = prev(ftr,1);
    
    cout<<"ptr = " <<*it<<endl;
    cout<<"ftr = "<<*it1<<endl;

    for(int i=0;i<5;i++){
        cout<<first_vector[i]<<" ";
        
    }
    
}

/*

void fun(int n)
{
    Stack S;  // Say it creates an empty stack S
    while (n > 0)
    {
      // This line pushes the value of n%2 to stack S
      push(&S, n%2);

      n = n/2;
    }

    // Run while Stack S is not empty
    while (!isEmpty(&S))
      printf("%d ", pop(&S)); // pop an element from S and print it
}


n=10,5,2

01010


*/