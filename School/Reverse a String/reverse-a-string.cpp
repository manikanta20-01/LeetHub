//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    void reverseHelper(string &str, int start, int end) {
        // Base case: if start is greater than or equal to end, return
        if (start >= end) {
            return;
        }

        // Swap the characters at start and end indices
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Make a recursive call with updated start and end indices
        reverseHelper(str, start + 1, end - 1);
    }
    string revStr(string &str) {
        // code here
        
        reverseHelper(str, 0, str.length() - 1);
        return str;
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends