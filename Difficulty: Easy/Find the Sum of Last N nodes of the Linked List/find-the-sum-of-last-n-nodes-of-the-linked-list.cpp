//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        if (!head) return 0;
    
    Node *first = head, *second = head;
    int sum = 0;
    
    // Move the `second` pointer n nodes ahead
    for (int i = 0; i < n; i++) {
        if (second != nullptr) {
            second = second->next;
        }
    }
    
    // Move both pointers until `second` reaches the end
    while (second != nullptr) {
        first = first->next;
        second = second->next;
    }
    
    // Sum the last `n` nodes starting from the `first` pointer
    while (first != nullptr) {
        sum += first->data;
        first = first->next;
    }
    
    return sum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n;
        cin >> n;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        Solution ob;
        cout << ob.sumOfLastN_Nodes(head, n) << endl;
    }
    return 0;
}
// } Driver Code Ends