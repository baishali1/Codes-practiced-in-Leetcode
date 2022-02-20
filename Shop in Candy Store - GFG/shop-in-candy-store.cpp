// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        
        int i,j,l,min,max;
        j=N-1;
        l=-1;
        min=0;
        max=0;
        vector<int>sweet;
        
        sort(candies,candies+N);
 
        for(i=0;i<=j;i++){
            j=j-K;
            min=min+candies[i];
        }
       
        
         for(i=N-1;i>l;i--){
            l=l+K;
            max=max+candies[i];
        }
        sweet.push_back(min);
        sweet.push_back(max);
        return(sweet);
 
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends