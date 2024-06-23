//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        unordered_map<char , char> occurred1;
        unordered_map<char , char> occurred2;
        // Your code here
        if(str1.length() != str2.length())
        return false;
        
        for(int i = 0; i < str1.length() ; i++)
        {
            if(occurred1.find(str1[i]) != occurred1.end())
            {
                if(occurred1[str1[i]] != str2[i])
                return false;
            }
            else
            {
                occurred1[str1[i]] = str2[i];
            }
            
             if(occurred2.find(str2[i]) != occurred2.end())
            {
                if(occurred2[str2[i]] != str1[i])
                return false;
            }
            else
            {
                occurred2[str2[i]] = str1[i];
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends
