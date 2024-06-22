//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to check if a string is subsequence of other string.
    bool isSubSequence(string A, string B)
    {
        //code here
        int j = 0;
        for(int i = 0; i < B.length(); i++)
        {
           
           
                if(A[j] == B[i])
                {
                    j++;
                  
                }
                
            
        }
        
        if(j == A.length())
        return true;
        else return false;
    }
};

//{ Driver Code Starts.
    
int main() {
	
	int t;
	cin>>t;
	while(t--){
	    string A, B; cin>>A>>B;
	    Solution ob;
	    bool ans = ob.isSubSequence(A, B);
	    if(ans == true)
	        cout<<"True"<<endl;
	    else
	        cout<<"False"<<endl;
	}
	return 0;
}
// } Driver Code Ends
