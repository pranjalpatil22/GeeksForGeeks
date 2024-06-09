//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int N)
    {
        //Your code here
        
          hash.assign(hashSize, -1);
         int q = 0;
         int newindex ;
        for(int i = 0; i < N; i++) {
            
            int hashIndex = arr[i] % hashSize; 
            
            if(hash[hashIndex] == -1 || hash[hashIndex] == arr[i]) {
                hash[hashIndex] = arr[i];
            } else {
                q = 0;
               do {
                   
                newindex = (hashIndex + q * q) % hashSize;
                q++;
                
            } while (hash[newindex] != -1 && q != hashSize);
                if(hash[newindex] == -1) {
                    
                    hash[newindex] = arr[i]; 
                }
            }
        }
    }


};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    
	    int  N;
	    cin>>N;
	    int arr[N];
	    
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    
	    vector<int> hash (hashSize,-1);
	    Solution obj;
	    obj.QuadraticProbing (hash, hashSize, arr, N);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}



// } Driver Code Ends
