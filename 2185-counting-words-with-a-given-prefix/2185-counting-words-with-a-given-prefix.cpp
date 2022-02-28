class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int i,j;
        int count=0;
        int count1=0;
        
        for(i=0;i<words.size();i++){
            count1=0;
            for(j=0;j<pref.size();j++){
            if(words[i][j]!=pref[j]){  //{"baishali","dance"} pref="dan"
                count1=1;
                break;
                }
            }
            if(count1==0){
                count++;
            }
        }
        return(count);
        
    }
};