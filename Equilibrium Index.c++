
/* Equilibrium Index */



#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int totalSum =0;
    int leftsum =0;

    for(int i=0;i<arr.size();i++){
         totalSum += arr[i];
    }
    for(int i=0;i<arr.size();i++){
        totalSum -= arr[i];
        
        if(totalSum == leftsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
   
}
