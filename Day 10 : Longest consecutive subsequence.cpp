//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
     unordered_set<int> record(arr, arr + N);
     
     int longestStreak = 0;
     
      for (auto num : record)
      {
            if (record.find(num - 1) == record.end())
            {
                int currentNum = num;
                int currentStreak = 1;

                 while (record.find(currentNum + 1) != record.end())
                 {
                    currentNum += 1;
                    currentStreak += 1;
                }

                 longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
      
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
