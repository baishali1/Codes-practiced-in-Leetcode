// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
        // Your code goes here   
        /*int i,j;
        vector<pair<int,int>>v;
        
        for(i=0;i<N;i++){
            for(j=0;j<M;j++){
                if(X-A[i]==B[j]){
                    v.push_back({A[i],B[j]});
                    break;
                }
            }
        }
        sort(v.begin(),v.end());
        return(v);   */
        
        int i,j,k;
        
        vector<pair<int,int>>v;
        sort(A,A+N);
        sort(B,B+M);
        
        for(i=0;i<N;i++){
            k=lower_bound(B,B+M,X-A[i])-B;
            if(X-A[i]==B[k]){
                v.push_back({A[i],B[k]}); 
            }
        }
        return(v);
        
    }
};


// { Driver Code Starts.
int main() {
	long long t;
	cin >> t;
	
	while(t--){
	    int N, M, X;
	    cin >> N >> M >> X;
        int A[N], B[M];
        
	    for(int i = 0;i<N;i++)
	        cin >> A[i];
	    for(int i = 0;i<M;i++)
	        cin >> B[i];
	        
	   Solution ob;
	   vector<pair<int,int>> vp = ob.allPairs(A, B, N, M, X);
	   int sz = vp.size();
        if(sz==0)
        cout<<-1<<endl;
        else{
            for(int i=0;i<sz;i++){
                if(i==0)
                cout<<vp[i].first<<" "<<vp[i].second;
                else
                cout<<", "<<vp[i].first<<" "<<vp[i].second;
            }
            cout<<endl;
        }
	}
	return 0;
}  // } Driver Code Ends