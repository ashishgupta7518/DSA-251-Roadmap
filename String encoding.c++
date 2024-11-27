


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



/*   2nd Approach Two Pointer */




#include <bits/stdc++.h> 
string encode(string &message)
{
    //   Write your code here.
     string encoded = "";
    int n = message.size();
    int i=0;
    while(i<n){
        char currentChar = message[i];
        int count = 0;

        // Move the second pointer `j` to count the repetitions
        int j = i;
        while (j < n && message[j] == currentChar) {
            count++;
            j++;
        }
        // Append the character and its count
        encoded += currentChar;
        encoded += to_string(count);

        // Move the first pointer `i` to `j`
        i = j;

    }
    return encoded;
}
