class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int i,j;
        int n=matrix[0].size();
        vector<vector<int>>v1;
        for(i=0;i<n;i++){
            vector<int>v;
            for(j=0;j<matrix.size();j++){
                v.push_back(matrix[j][i]);
            }
            v1.push_back(v);
        }
        return v1;
        
    }
};