// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     
     int i,j,count;
     for(i=0;i<s.size();i++){
         if(s[i]==x[0]){
             count=0;
             for(j=0;j<x.size();j++){
                 if(s[i+j]!=x[j]){
                     count=1;
                     break;
                 }
         }
         if(count == 0){
             return i;
         }
         
         }
     
     } 
     return -1;
     
}