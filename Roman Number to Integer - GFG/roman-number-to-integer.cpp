// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int num = 0;
	unordered_map<char,int>st;
        st.insert({'I',1});
        st.insert({'V',5});
        st.insert({'X',10 });
        st.insert({'L',50});
        st.insert({'C',100});
        st.insert({'D',500});
        st.insert({'M',1000});
       int n = str.length();
       for(int i = 0; i < n; i++){   //MMMCMXCIX
           if(i < n-1 && st[str[i]] < st[str[i+1]]){
               num = num - st[str[i]];
           }
           else{
               num = num + st[str[i]];
           }
       }
       return (num);
   }
        
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}  // } Driver Code Ends