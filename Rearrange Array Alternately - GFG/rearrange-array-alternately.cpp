// { Driver Code Starts
// C++ program to rearrange an array in minimum 
// maximum form 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	/*long long int arr1[n]={};
    	int i,j;
    	int k;
    	j=n-1;
    	i=0;
    	
    	for(k=0;k<n;k=k+2){
    	    arr1[k]=arr[j];
    	    arr1[k+1]=arr[i];
    	    j--;
    	    i++;
    	    /*if(i==j){
    	        arr1[k+1]=arr[i];
    	        break;
    	    }
    	    if(i>j){
    	        break;
    	    }
    	} 
    	
    	for(i=0;i<n;i++){
    	    arr[i]=arr1[i];
    	} */
    	
    vector<int>v;
    	int i;
    	for(i=0;i<n-i;i++)
    	{
    	    v.push_back(arr[n-i-1]);
    	    v.push_back(arr[i]);
    	}
    	for(i=0;i<n;i++)
    	{
    	    arr[i]=v[i];
    	}	
    	
    	
  	 
    }
};

// { Driver Code Starts.

// Driver program to test above function 
int main() 
{
    int t;
    
    //testcases
    cin >> t;
    
    while(t--){
        
        //size of array
        int n;
        cin >> n;
        
        long long arr[n];
        
        //adding elements to the array
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        
        //calling rearrange() function
        ob.rearrange(arr, n);
        
        //printing the elements
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		
		cout << endl;
    }
	return 0; 
} 
  // } Driver Code Ends