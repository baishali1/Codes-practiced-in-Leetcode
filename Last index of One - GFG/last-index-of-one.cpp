// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lastIndex(string s) 
    {
        long long int n;
        int i,b;
        n=s.size();
        int count=0;
        
        
       for(i=0;i<n;i++) {
           
           if(s[i]=='1'){
               b=i;
               count=count+1;
           }
       }
       if(count==0){
           return(-1);
       }
       else return(b);
       
    }

};

// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  // } Driver Code Ends