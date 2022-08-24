class Solution {
public:
    bool isPowerOfThree(int n) {
        
        long long n1,i;
        // if(n=1){
        //    return true; 
        // }
         if(n==0){
           return false; 
        }
        
        n1=1;
        i=0;
        
        while(1){
          
            if(n1>n){
                return false;
            }
              else if(n1==n){
                return true;
            }
            
            i++;
            n1=pow(3,i);
        }
        return true;
    }
};