
/* Rotate Error by K */


vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
        k = k % n; // Ensure k is within the range [0, n) 
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());

return arr;
}
