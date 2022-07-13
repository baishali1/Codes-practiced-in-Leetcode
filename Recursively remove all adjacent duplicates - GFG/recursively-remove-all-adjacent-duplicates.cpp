// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        // code here
        int i,count,j;
        string f;
        string a;
        count=0;
        for(i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                for(j=i+1;j<s.size();j++){
                  if(s[i]==s[j]){
                      j++;
                  } 
                  if(s[i]!=s[j]){
                      break;
                  }
                }
                s.erase(s.begin()+i,s.begin()+j);
                i--;;
                count=1;
            }
        }
         if(count==0 || s==" "){
            return(s);
        }
        f=rremove(s); //abx
        return(f);
        //return("dkjsfh");
        //return(s);
        //return(a);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends