//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> modifyAndRearrangeArray(vector<int> &arr) {
        // Complete the function
         int n = arr.size();

    // First pass: Modify the array based on the given rules
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != 0 && arr[i] == arr[i + 1]) {
            arr[i] = arr[i] * 2;  // Double the current number
            arr[i + 1] = 0;       // Set the next number to 0
        }
    }

    // Second pass: Shift all the non-zero elements to the front
    vector<int> result(n, 0); // Initialize a result array with zeros
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            result[index] = arr[i];
            index++;
        }
    }
    return result;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        vector<int> ans = obj.modifyAndRearrangeArray(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends