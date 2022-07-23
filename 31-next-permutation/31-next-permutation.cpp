class Solution {
public:
    void nextPermutation(vector<int>& n) {
        
        int i,j,k,m,count,l;
        m=INT_MAX;
        count=0;
    if(n.size()>1){
        for(i=n.size()-2;i>=0;i--){
           if(n[i]<n[i+1]){
               count=1;
               for(j=i+1;j<n.size();j++){
                   if(n[j]-n[i]<m && n[j]-n[i]>0){
                       m=n[j]-n[i];
                       k=j;
                   }
               }
               cout<<k<<endl;
               swap(n[i],n[k]);
                cout<<i<<endl;
               sort(n.begin()+i+1,n.end());
                //for(l=0;l<n.size();l++){
                   //cout<<n[l]<<endl;
               //}
               break;
          
           }
        }
        if(count==0){
           sort(n.begin(),n.end()); 
        }
        
    }
        
    }
};