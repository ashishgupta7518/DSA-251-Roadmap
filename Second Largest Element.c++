
1st Approach   https://www.naukri.com/code360/problems/second-largest-element-in-the-array_873375?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=SUBMISSION

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int first = INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if(arr[i] < first and arr[i] > second){
            second = arr[i];
        }
    }
    return second == INT_MIN ? -1:second;
}



/*   2nd Approcah */



#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
          largest = max(largest,arr[i]);
    }

    int secondlargest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > secondlargest and arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    if(secondlargest == INT_MIN){
        return -1;
    }else{
        return secondlargest;
    }

    
}
