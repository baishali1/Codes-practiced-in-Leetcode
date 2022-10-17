//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        int i,sum,rh;
        sum=0;
        
        
        if(n==1)
        {
            return(1);
        }
        
        for(i=0;i<n;i++)
        {
            sum=sum+a[i];
        }
        //cout<<sum<<endl;
        rh=a[0];
        sum=sum-a[0];
        
        for(i=1;i<n;i++)
        {
            sum=sum-a[i];
            if(rh==sum)
            {
               return(i+1); 
            }
             else if(rh<sum)
            {
               rh=rh+a[i]; 
            }
              else if(rh>sum)
            {
               return(-1); 
            }
        }
        return(-1);
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends