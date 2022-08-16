class Solution {
public:
    int firstUniqChar(string s) {
        int i;
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
        return(-1);
//         map<pair<int,char>,int>mp;
             
//         int i;
//         char b;
        
//         for(i=0;i<s.size();i++){
//             mp[{i,s[i]}]++;
//         }

//         for(auto it=mp.begin();it!=mp.end();it++){
//             if(it->second==1){
//                 b=it->first.second;
//                 break;
//             }
//         }
//    /*     for(auto it=mp.begin();it!=mp.end();it++){
//             cout<<it->first.second;
//             cout<<it->second<<endl;
            
//             } */
    
//         for(i=0;i<s.size();i++){
//             if(s[i]==b){
//                return(i); 
//             }
//         }
//         return(-1);
        
    }
};