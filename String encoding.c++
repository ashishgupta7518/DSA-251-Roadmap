


#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
    int count =1;
    string ans ="";
    char ch = message[0];
    for(int i=1 ;i<=message.size();i++){
        if(message[i]==ch){
            count++;

        }else{
            ans +=ch;
            ans +=to_string(count);
            count =1;
            ch =message[i];
        }
    }
    return ans;
}
