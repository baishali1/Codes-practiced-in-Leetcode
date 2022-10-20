//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>v;
        map<int,int>visited;
        int i,j;
           i=0;
        v.push_back(0);
        visited[0]=1;
       
        while(1)
        {
         
            for(j=0;j<adj[v[i]].size();j++)
            {
                if(visited[adj[v[i]][j]]==0)
                {
                   v.push_back(adj[v[i]][j]); 
                   visited[adj[v[i]][j]]=1;
                }
                
            }
            i++;
          
            if(i==v.size())
            {
               break; 
            }
             
            
        }
        return(v);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends