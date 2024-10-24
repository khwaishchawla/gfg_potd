//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
        sort(arr.begin(), arr.end());
    
         vector<int> ans;
          int i = 0;
         int n = arr.size();
    

    while (i < n / 2) {
        ans.push_back(arr[n - i - 1]); 
        ans.push_back(arr[i]);         
        i++;
    }
    
    
    if (n % 2 != 0) {
        ans.push_back(arr[i]);  
        
    }
    
    return ans;
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
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends