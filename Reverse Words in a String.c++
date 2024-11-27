/* Solution using Stack */





#include <iostream>
using namespace std;
#include <bits/stdc++.h>

string reverseStringWordWise(string input)
{
    //Write your code here
    stack<string>st;
    
    
    string res ="";
    string ans = "";
    for(int i=0;i<input.size();i++){
      if(input[i] ==' '){
          if(!res.empty()){
              st.push(res);
              res = "";
          }
      }else{
              res +=input[i];
          }
    }

    if(!res.empty()){
        st.push(res);
    }

    while(st.size() > 1){
        ans +=st.top();
        ans +=" ";
        st.pop();


    }
    ans+=st.top();

    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}







/* Approach 2*/



string reverseStringWordWise(string input)
{
    vector<string> v;
        int i = 0;
        string temp = "";
        while (i < input.size()) {
            while (input[i] == ' ' && i < input.size())
                i++;
            while (input[i] != ' ' && i < input.size()) {
                temp += input[i];
                i++;
            }
            if (!temp.empty())
                v.push_back(temp);
            temp = "";
            i++;
        }
        reverse(v.begin(), v.end());
        string ans = "";
        for (auto i : v)
            ans += i + ' ';
        ans.pop_back();
        return ans;
}

