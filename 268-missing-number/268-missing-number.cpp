class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int i,j,count;
        for(i=0;i<=nums.size();i++){
            for(j=0;j<nums.size();j++){
                if(nums[j]==i){
                    count=1;
                    break;
                }
            }
            if(count==0){
                return i;
            }
            count=0;
        }
         return 0;
    }
   
};