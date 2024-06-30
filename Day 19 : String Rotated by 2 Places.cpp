//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length() != str2.length() || str1.length() < 3 || str2.length() < 3)
        return 0;
        
        string c1 = str1.substr(2 , str1.length()) + str1.substr(0 , 2);
        string c2 = str1.substr(str1.length() - 2) + str1.substr(0, str1.length() - 2);
        
        if(c1 == str2 || c2 == str2)
        return 1;
        else return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends
