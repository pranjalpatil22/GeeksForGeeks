//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

string printNumber(string , int);

// User function pasted here
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,temp;
		cin>>s;
		int i,len=s.length();
		
		cout << printNumber(s,len) << "\n";
	}
	return 0;
}
// } Driver Code Ends


//User function template for C++


//Function to find matching decimal representation of a string as on the keypad.
string printNumber(string s, int n) 
{
    //code here
    int a[26] = {0};
    string result(n , 0);
    for(int i = 0; i < 26; i++)
    {
        if(i >= 0 && i <= 2)
        a[i] = 2;
        else if(i >= 3 && i <= 5)
        a[i] = 3;
        else if(i >= 6 && i <= 8)
        a[i] = 4;
        else if(i >= 9 && i <= 11)
        a[i] = 5;
        else if(i >= 12 && i <= 14)
        a[i] = 6;
        else if(i >= 15 && i <= 18)
        a[i] = 7;
        else if(i >= 19 && i <= 21)
        a[i] = 8;
        else a[i] = 9;
    }
    
    for(int i = 0; i < s.length(); i++)
    {
        result[i] = '0' + a[s[i] - 'a'];
    }
    
    return result;
}
