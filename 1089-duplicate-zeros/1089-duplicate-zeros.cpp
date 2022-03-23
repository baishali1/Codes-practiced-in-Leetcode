class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int i,n;
        n=arr.size();
        for(i=0;i<arr.size();i++){
            if(arr[i]==0){
                arr.insert(arr.begin()+i,0);
                i++;
            }
        }
        if(arr.size()>n){
            arr.erase(arr.begin()+n,arr.end());
        }
        
    }
};