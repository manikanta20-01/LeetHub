//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
     int partition(int arr[], int l, int r) {
        int pivot = arr[r];  // Choose the rightmost element as the pivot
        int i = l - 1;  // Initialize the smaller element index

        for (int j = l; j < r; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[r]);
        return i + 1;
    }

    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
         if (k > 0 && k <= r - l + 1) {
            int pos = partition(arr, l, r);

            // Check if the position is the Kth smallest element
            if (pos - l == k - 1)
                return arr[pos];
            else if (pos - l > k - 1)
                return kthSmallest(arr, l, pos - 1, k);
            else
                return kthSmallest(arr, pos + 1, r, k - pos + l - 1);
        }

        return INT_MAX;  // Return INT_MAX if K is out of array bounds
    }
    
};

//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends