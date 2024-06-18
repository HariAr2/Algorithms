/*

Given a non-negative integer c, decide whether there're two integers a and b such that a2 + b2 = c.

 

Example 1:

Input: c = 5
Output: true
Explanation: 1 * 1 + 2 * 2 = 5
Example 2:

Input: c = 3
Output: false
 

Constraints:

0 <= c <= 231 - 1




*/




class Solution {
public:
    bool judgeSquareSum(int c) {
        int end = sqrt(c);
        long i =0,j=end;
        while(i<=j){
            long squares = (i*i)+(j*j);
            if(squares==c){
                return true;
            }
            else if(squares>c){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};