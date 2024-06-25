//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string a;
        string subString;
        int j = S.length();
        for(int i = S.length() - 1; i >= 0; i--)
        {
             if (S[i] == '.')
             {
                a.append(S.substr(i + 1, j - i - 1));
                a.append(".");
                j = i;
            }
            
        }
         a.append(S.substr(0, j));
        return a;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
