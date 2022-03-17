// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    long long i,j,d;
    
    sort(a.begin(),a.end());
    
    
    d=a[n-1];
    //cout<<d;
    
    //int i,j;
    for(i=0;i<n-(m-1);i++){
        if(a[i+(m-1)]-a[i]<d){
            d = a[i+(m-1)]-a[i];
        }
    }
    return(d);
    
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends