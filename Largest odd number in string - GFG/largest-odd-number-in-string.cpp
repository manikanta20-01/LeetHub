//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        string result = "";
        int i;
        
        for(i = s.size()-1;i>=0;i--)
        {
            if((s[i]-'0')&1)break;
        }
        return (i<0)?"":s.substr(0,i+1);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends