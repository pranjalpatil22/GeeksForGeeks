//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length() != s2.length())
        return false;
        
        int j = 0,k = -1;
        string con = s1 + s1;
        for(int i = 0 ;i < con.length(); i++)
        {
            if(con[i] == s2[j] && k == j - 1)
            {
                k = j;
                j++;
            }
            
        }
        
        if(j == s1.length())
        return true;
        else return false;
       
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends
