// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    int i,j,temp,temp1;
	    
	    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(nuts[j]>nuts[j+1]){
                temp=nuts[j];
                nuts[j]=nuts[j+1];
                nuts[j+1]=temp;
            }
            
            if(bolts[j]>bolts[j+1]){
                temp1=bolts[j];
                bolts[j]=bolts[j+1];
                bolts[j+1]=temp1;
            }
            
        }
    }
    
//for(i=0;i<n;i++){
//nuts[i];
//bolts[i];
//cout<<bolts[i];
//}
	    
	    
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends