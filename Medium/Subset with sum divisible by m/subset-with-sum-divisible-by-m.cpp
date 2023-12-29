//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
        bool subset(vector<int>& arr,int index,int sum,int n,int d)
{
        if(index == n){
            return (sum % d == 0) and (sum > 0);
        }
        
        // No
        if(subset(arr,index + 1,sum,n,d))
        {
            return true;
        }
        // Yes
        if(subset(arr,index + 1,sum + arr[index],n,d))
        {
            return true;
        }
        return false;
        
    
    
}
		int DivisibleByM(vector<int>nums, int m){
		    // Code here
		    int n = nums.size();
		    if(subset(nums,0,0,n,m)){
		        return 1;
		    }
		    else{
		        return 0;
		    }
		    
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans  = ob.DivisibleByM(nums, m);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends