// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends


int findElement(int arr[], int n) {
    
    int i,j,d,count;
    d=arr[0];
   
    
    for(i=1;i<n-1;i++){
        count=0;
        if(arr[i]>=d){
            d=arr[i];
            for(j=i+1;j<n;j++){
                if(arr[j]<arr[i]){
                    count=1;
                    break;
                }
        }
        if(count==0){
           return(d);
        }
    }

  }
        return(-1);
}