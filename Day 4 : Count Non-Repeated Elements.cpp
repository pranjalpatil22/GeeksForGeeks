//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map <int , int> counter;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            counter.insert({arr[i] , 0});
        }
        for(int i = 0; i < n; i++)
        {
            counter[arr[i]]++;
        }
        for( auto i : counter)
        {
            if(i.second == 1)
            count++;
        }
        
    return count;
    }

};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.countNonRepeated(arr,n)<<endl;
	    
	}
	return 0;
}

// } Driver Code Ends
