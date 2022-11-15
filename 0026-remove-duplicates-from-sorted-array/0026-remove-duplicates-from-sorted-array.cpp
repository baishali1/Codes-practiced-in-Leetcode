class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        /*int i;
        
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
              
        return(nums.size());  */
        
        int i,j,count;
        j=0;
        count=0;
        
        
        
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                j=i+1;
                count++;
                break;
            }
        }
        //count=j;
        for(i++;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {

                count++;
             
            }
            else if(nums[i]!=nums[i+1])
            {
                nums[j]=nums[i+1];
                //count++;
                j++;
                
            }
        }
        //cout<<count<<endl;
        return(nums.size()-count);
        
        
        
    }
};