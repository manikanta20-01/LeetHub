//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int count = 0;
	    //if(N == 1)return N;
	    for(int i = 0;i < N;i++)
	    {
	        if(A[i] == A[i+1] && count == 0)
	            count = count + 2;
	        else if(count == 2)
	           count = 0;
	        else 
	           return A[i];
	            
	    }
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends