/* First Missing Positive  */



#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    // Write your code here.
    int maxi = 0;
    set<int>st;
    for(int i=0;i<n;i++){
        if(arr[i] > 0){
            st.insert(arr[i]);
            maxi = max(maxi, arr[i]);
        }
    }

    int c=1;
    for(auto ele:st){
        if(ele!=c) return c;

        c++;
    }
    return maxi+1;
}
