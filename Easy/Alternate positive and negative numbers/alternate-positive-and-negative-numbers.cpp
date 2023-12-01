//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	     vector<int> posi;
        vector<int> negi;
        
        for(int i = 0; i < n; i++) {
            if(arr[i] < 0) {
                negi.push_back(arr[i]);
            } else {
                posi.push_back(arr[i]);
            }
        }
        int i = 0,j = 0,k = 0;
        
        while(i < posi.size() and j < negi.size())
        {
            arr[k++] = posi[i++];
            arr[k++] = negi[j++];
            
            
        }
        while(i < posi.size())
        {
            arr[k++] = posi[i++];
        }
        while(j < negi.size())
        {
            arr[k++] = negi[j++];
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends