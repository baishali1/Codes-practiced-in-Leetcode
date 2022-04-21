class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i,sum;
        i=1;
        
        while(1){
            sum=i*i;
            if(num==sum){
                return(true);
            }
            if(sum>num){
                return(false);
            }
            i++;
            
        }
        
    }
};