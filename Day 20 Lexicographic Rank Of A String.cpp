//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find lexicographic rank of a string.
    vector <long long> factorial(int n)
    {
        vector<long long> re(n + 1,1);
        for(int i = 2; i <= n; i++)
        re[i] = re[i - 1]*i;
        
        return re;
    }
    
    int findRank(string S) {
        // Your code here
        vector<int> count(26 , 0);
        for(int i = 0; i < S.length(); i++)
        {
            count[S[i] - 'a']++; 
            if(count[S[i] - 'a'] > 1)
            return 0;
        }
        
        vector<long long> fact = factorial(S.length());
        int r = 1;
        for(int i = 0; i < S.length(); i++)
        {
            long long countof = 0;
            for(int j = i + 1; j < S.length(); j++)
            {
                if(S[j] < S[i])
                countof++;
            }
            r = r + countof*fact[S.length() - i - 1];
        }
        
        return r;
    }
};

//{ Driver Code Starts.

int main() {
    string S;
    int t;
    cin >> t;
    while (t--) {

        cin >> S;
        Solution obj;
        cout << obj.findRank(S) << endl;
    }
}

// } Driver Code Ends
