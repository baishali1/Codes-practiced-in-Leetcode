class Solution {
public:
    int firstUniqChar(string s) {
       /* int i;
        unordered_map<char,int>mp;
        for(i=0;i<s.size();i++)
            {
                mp[s[i]]++;
            }
        for(i=0;i<s.size();i++)
        {
            if(mp[s[i]]==1)
            {
                return(i);
            }
        }
        return(-1);  */
        
       int i,a,b;
        string s1;
        s1=s;
        sort(s1.begin(),s1.end());
        
        for(i=0;i<s.size();i++)
            {
                a=upper_bound(s1.begin(),s1.end(),s[i])-s1.begin();
                b=lower_bound(s1.begin(),s1.end(),s[i])-s1.begin();
                if(a-b==1){
                  return(i);
              }
            }
        return(-1);
        
    }
};