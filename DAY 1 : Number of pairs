//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
 

class Solution{
    public:
    
    int BS(int Y[], int N, int keyElement)
    {
        int answer = -1;
        int high = N -1;
        int low = 0;
        int mid = 0;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(Y[mid] > keyElement)
           {
                answer = mid;
            high = mid -1 ;
           }
           else 
           low = mid + 1;
        }
        return answer;
    }
    
    
    long long countPairs(int X[], int Y[], int M, int N)
    {
       //Your code here
       sort(X , X + M);
       sort(Y , Y + N);
       long long result = 0;
      
       int zero = 0,one = 0,two = 0,three = 0,four = 0;
       for(int i = 0; i < N; i++)
       {
           if(Y[i] == 0)
          zero++;
           else if(Y[i] == 1)
          one++;
           else if(Y[i] == 2)
         two++;
           else if(Y[i] == 3)
          three++;
           if(Y[i] == 4)
          four++;
           
       }
       
       for(int i = 0; i < M; i++)
       {
           if(X[i] == 0)
           continue;
           
           else if(X[i] == 1)
           result = result +  zero;
           
           else if(X[i] == 2)
           {
               int index = BS(Y , N, 2);
               if(index != -1)
               {
                   result = result + N - index;
               }
               result = result +  zero +  one;
                result = result -  three -  four;
           }
           
           else 
           {
               if(X[i] == 3)
               result = result + two;
               
               int index = BS(Y , N, X[i]);
                if(index != -1)
               {
                   result = result + N - index;
               }
                result = result +  zero +  one;
               
           }
       }
       return result;
    }
};


//{ Driver Code Starts.
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int M,N;
		cin>>M>>N;
		int i,a[M],b[N];
		for(i=0;i<M;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<N;i++)
		{
			cin>>b[i];
		}
		Solution ob;
		cout<<ob.countPairs(a, b, M, N)<<endl;
	}
}
// } Driver Code Ends
