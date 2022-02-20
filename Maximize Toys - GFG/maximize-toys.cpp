// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        // code here
        int i,j,temp,count,k;
        count=0;
        long long int sum=0;
        
       /* for(i=0;i<N;i++){
            for(j=0;j<N-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
           }
        }
        } */
        
        sort(arr.begin(),arr.end());
        
      for(i=0;i<N;i++){  //25,5,2,30,49,7,99 [50] // 2,5,7,25,30,49,99 //N=7
          sum=sum+arr[i]; //0,1,2,3,4,5
          if(sum<=K){   //2,7,14,39,69,118
              count=count+1; //0,1,2,3,4
          }
          //else 
          //break;
      }
      
    return(count);    
     
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends