// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string remove(string s){
        // code here
        string res="";
       int i=0;
	char ch;
	int freq;
       while(i<s.length()){
           ch=s[i]; //
           freq=0;
           while(ch==s[i]){
               freq++;
               i++;
           }
           if(freq==1){
               res+=ch; //res="ab"
           }
       }
       if(res==s){
           return res;
       }
       return remove(res);
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
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends