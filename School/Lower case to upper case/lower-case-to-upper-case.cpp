//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
 
string to_upper(string in);
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout << to_upper(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends



string to_upper(string str){
    //code
    int index = str.length() - 1;
    if(index == -1)
       return "";
       
     str[index] = 'A' + str[index] - 'a';
     return to_upper(str.substr(0, index)) + str[index];
    
}