class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j;
        vector<int>v;
        for(i=0;i<numbers.size()-1;i++)
        {
            j=upper_bound(numbers.begin(),numbers.end(),target-numbers[i])-numbers.begin()-1;
            if (j!=numbers.size() && target-numbers[i]==numbers[j] && i!=j)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
        }
     return v;   
    }
};