// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here //brute force
        
        int i,l,k,rs,ls,j;

        if(n==1){
            return(1);
        }
        if(n==2){
            return(-1);
        }
        
       /* for(i=1;i<n-1;i++){
            k=i-1;
            l=i+1;
            ls=0;
            rs=0;
            while(k>=0){
                ls=ls+a[k];
                k--;
            }
            while(l<n){
                rs=rs+a[l];
                l++;
            }
            if(ls==rs){
                return(i+1);
            }
                
        }
        return(-1); */
        
       /* sum=0;
        for(i=0;i<n;i++){
            sum=sum+a[i];
        }
        
        j=1;
        while(j<n-1){
             rs=0;
             ls=0;
             
            for(i=0;i<j;i++){
                rs=rs+a[i];
            }
        ls=sum-rs-a[i];
        
        if(ls==rs){
            return(i+1);
       
        }
        j++;
                
    }
        return(-1); */
        
    int sum=0,left=0;
    
        for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum-=a[i];
        //left-sum;
        if(left==sum)
        {
            return i+1;
        }
        left+=a[i];
    }
    return -1; 
       }
        
    

};

// { Driver Code Starts.


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