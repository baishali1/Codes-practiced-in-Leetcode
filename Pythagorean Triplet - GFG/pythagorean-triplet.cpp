// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here //brute force
	    
	    int i,j,k;
	    vector<int>v;
	    sort(arr,arr+n);
	    for(i=0;i<n;i++){
	        v.push_back(pow(arr[i],2));
	    }
	    
	    for(i=0;i<n-2;i++){
	        for(j=i;j<n-1;j++){
	            for(k=j+1;k<n;k++){
	                if(pow(arr[i],2)+pow(arr[j],2)==pow(arr[k],2)){
	                    return(1);
	                    
	                }
	            }
	        }
	    }
	    return(0);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends