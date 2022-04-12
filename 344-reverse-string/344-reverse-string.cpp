class Solution {
public:
    void reverseString(vector<char>& s) {
        int i,j;
        j=s.size()-1;
        for(i=0;i<s.size()/2;i++){
            swap(s[i],s[j]);
            j--;
        }
        
    }
};