//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
       int a[26] = {0};
       int maxm = 0,index = 'a';
       for(int i = 0; i < str.length(); i++)
       {
           a[str[i] - 'a']++;
          
       }
       
       for(int i = 0; i < 26; i++)
       {
           if(a[i] > maxm)
           {
               maxm = a[i];
               index = i;
           }
       }
       
       return (index + 'a');
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
