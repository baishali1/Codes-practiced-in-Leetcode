class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i,j;
        i=0;
        if(nums.size()==1){
            return(nums);
        }
        for(j=1;j<nums.size();j++){
            if((nums[j]%2==0 && nums[i]%2==0) || (nums[j]%2==1 && nums[i]%2==0)){
             i++;   
            }
            if(nums[j]%2==0 && nums[i]%2==1){
                swap(nums[i],nums[j]);
                i++;
            }
        }
        return(nums);
        
    }
};