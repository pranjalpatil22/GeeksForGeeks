//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> hashTable(hashSize, -1); 
        for(int i = 0; i < sizeOfArray; i++) {
            
            int hashIndex = arr[i] % hashSize; 
            if(hashTable[hashIndex] == -1 || hashTable[hashIndex] == arr[i]) {
                hashTable[hashIndex] = arr[i];
            } else {
                
                int j = (hashIndex + 1) % hashSize;
                while(j != hashIndex && hashTable[j] != -1 && hashTable[j] != arr[i]) {
                    j = (j + 1) % hashSize;
                }
                if(hashTable[j] == -1) {
                    hashTable[j] = arr[i]; 
                }
            }
        }
        return hashTable;
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
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}


// } Driver Code Ends
