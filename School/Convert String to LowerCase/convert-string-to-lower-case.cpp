//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string str) {
        // code here
        if(str.empty())
           return "";
        // Base case
        
        if(str[0] >= 'A' && str[0] <= 'Z')
        {
            str[0] = 'a' + str[0] - 'A';
            
        }
        return str[0] + toLower(str.substr(1));
           
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends