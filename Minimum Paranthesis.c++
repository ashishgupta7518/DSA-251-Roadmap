/*  Approach   1   using stack  */


class Solution {
public:
    int minAddToMakeValid(string s) {
       stack<char>st;

       for(auto &val : s){
        if(st.empty()){
            st.push(val);
        }else if(st.top() == '(' and val == ')'){
            st.pop();
        }else{
            st.push(val);
        }
       }

       return st.size();

        
    }
};




/*   2nd Approach */


#include <bits/stdc++.h> 
int minimumParentheses(string pattern) {
    // Write your code here.
    // pattern is the given string.
   int open = 0; 

    int close = 0; 

 

    for(int i = 0; i<pattern.size();i++){

        if( pattern[i] == '(' ) open++; 

        else{

            if(open == 0) close++; 

            else{

                open--;

            }

        }

    }

    return (open + close);
}
