class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>v;
        int i,j;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
               v.push_back(grid[i][j]); 
            }
        }
        for(i=0;i<k;i++){
            int x= v[v.size()-1];
            v.insert(v.begin(),x);
            v.pop_back();
        }
        int k1=0;
           for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
               grid[i][j]=(v[k1]);
                k1++;
            }
        }
            return(grid);
        
    }
};