//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
         if(a.length() != b.length())
         return 0;
         
         int arr[26] = {0};
         int brr[26] = {0};
        for(int i = 0; i < a.length(); i++)
        {
            arr[a[i] - 'a']++;
            brr[b[i] - 'a']++;
        }
        
        for(int i = 0; i < 26; i++)
        {
            if(arr[i] != brr[i])
            return 0;
        }
        
        return 1;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
