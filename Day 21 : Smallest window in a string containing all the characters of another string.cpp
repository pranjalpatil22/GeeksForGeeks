//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int n = s.length();
        int m = p.length();
        if(m > n)
        return "-1";
      
        vector<int> countP(26,0);
        int i = 0,l = 0, stIndex = -1, minLength = INT_MAX,count = 0;

        for (char c : p)
        {
             countP[c - 'a']++;
        }
        
       
        while( i < n)
        {
            if(countP[s[i] - 'a'] > 0)
            {
                count++;
              
            }
              countP[s[i] - 'a']--;
            
            while (count == m)
            {
            if (i - l + 1 < minLength) 
            {
                minLength = i - l + 1;
                stIndex = l;
            }
            countP[s[l] - 'a']++;
            if (countP[s[l] - 'a'] > 0)
            {
                count--;
            }
            l++;
        }
            i++;
        }
        
        if( stIndex == -1)
        return "-1";
        else
        return s.substr( stIndex , minLength);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends
