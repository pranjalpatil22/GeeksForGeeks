//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string result;
        string lower;
        string upper;
        int j = 0,k = 0;
        for(int i = 0; i < n; i++)
        {
            if((int)str[i] > 96)
            {
                lower.push_back( str[i]);
                j++;
            }
            else
           {
                upper.push_back( str[i]);
                k++;
           }
        }
        
        sort(upper.begin() , upper.end());
        sort(lower.begin() , lower.end());
        
        j = 0,k = 0;
        for(int i = 0; i < str.length(); i++)
        {
            if((int)str[i] > 96)
           {
                result.push_back(lower[j]);
                j++;
           }
           else
           {
                result.push_back(upper[k]);
                k++;
           }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends
