class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int j,i;
        sort(nums.begin(),nums.end());
        // for(i=0;i<nums.size();i++){
        //     cout<<nums[i]<<endl;
        // }
           
            for(j=0;j<nums.size()-1;j++){
                if(nums[j]==nums[j+1]){
                    return nums[j];
                }
            }
       return 0;
        }
    
};