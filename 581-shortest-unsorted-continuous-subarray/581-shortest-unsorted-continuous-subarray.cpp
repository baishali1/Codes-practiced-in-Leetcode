class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int i;
        vector<int>v;
         vector<int>v1;
        
        for(i=0;i<nums.size();i++){
           v.push_back(nums[i]);     
        }
        
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++){
            if(nums[i]!=v[i]){
                v1.push_back(i);
            }
        }
        
        if(v1.size()==0 || nums.size()==1 || nums.size()==0){
            return 0;        
        }
        else{
        return((v1[v1.size()-1]-v1[0])+1);
        }
        
    }
};