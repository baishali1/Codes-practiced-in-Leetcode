class Solution {
public:
    bool isValid(string x) {
        
        int i;
        stack<char>st;

        for(i=0;i<x.size();i++){
            if(x[i]=='(' || x[i]=='{' || x[i]=='['){
                st.push(x[i]);
                
            }
            else if(x[i]==')' && st.empty() || x[i]=='}' && st.empty() || x[i]==']' && st.empty()){
                return(false);
            }
            else if((x[i]=='}' && st.top()=='{') || (x[i]==']' && st.top()=='[') || (x[i]==')' && st.top()=='(') ){
                st.pop();
            }
            else if((x[i]=='}' && st.top()!='{') || (x[i]==']' && st.top()!='[') || (x[i]==')' && st.top()!='(') ){
                return(false);
            }
          
            
        }
        if(st.empty()){
            return(true);
        }
        return 0;
    }
};