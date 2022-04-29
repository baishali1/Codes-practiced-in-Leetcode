class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i;
        int num;
        int a=0;
        vector<int>v;
        
        for(i=0;i<numbers.size();i++){
            num=target-numbers[i];
            //(upper_bound will give iterator/pointer and subtracting                             numbers.begin() will give index)
            a=(upper_bound(numbers.begin(),numbers.end(),num)-numbers.begin())-1; 
            if(numbers[a]==num){
                v.push_back(i+1);
                v.push_back(a+1);
                return v;
            }
        }
        return v;  
    }
};