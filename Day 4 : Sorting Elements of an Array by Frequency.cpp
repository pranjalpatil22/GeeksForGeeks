//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    
    static bool customComparator(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second != b.second)
            return a.second > b.second; 
        return a.first < b.first; 
    }
    
    vector<int> sortByFreq(int arr[],int n)
    {
        //Your code here
         unordered_map <int , int> counter;
         vector< pair<int , int>> Repeated;
        vector<int> result;
        for (int i = 0; i < n; ++i)
        {
            counter[arr[i]]++;
        }
        
       for(auto i : counter)
       {
          Repeated.push_back(i);
       }
       
       sort(Repeated.begin() , Repeated.end() , customComparator);
       
       for (const auto& i : Repeated) {
            result.insert(result.end(), i.second, i.first);
        }
       return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends
