// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        
        int i,v;
        string s;
        //v=str1.size();
        
        if (str1.size()!=str2.size()){
            return(false);
        }
        
        s=str1;
        
        //if (v%2==0) {
            //for(i=1;i<v/2;i++){
            
            
                str1.push_back(str1[0]);
                str1.push_back(str1[1]);
                str1.erase(str1.begin(),str1.begin()+2);
                    if(str1==str2){
                    return(true);
                    }
            
                //}
         //}
        
        //if (v%2==1){
            //for(i=1;i<v;i++){
                s.insert(s.begin(),s[s.size()-1]);
                //v=s.size();
                s.insert(s.begin(),s[s.size()-2]);
                s.erase(s.end()-2,s.end());
                //cout<<s<<endl;
                    if(s==str2){
                    return(true);
                    }
            //}
        //}
        if(str1!=str2 && s!=str2)
        return(false);
    }

};

// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends