class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int i;
        vector<int>v;
        v.push_back(nums[0]);
       // sum=0;
        
        for(i=1;i<nums.size();i++){
           // sum=sum+nums[i]
            v.push_back(nums[i]+v[i-1]);
        }
        return(v);
    }
};