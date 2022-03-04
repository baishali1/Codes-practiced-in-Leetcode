// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        
        int x,i,j;
        x=0;
        for(i=0;i<3;i++){
            for(j=0;j<n;j++){
                if(a[j]==i){
                    swap(a[x++],a[j]);
                    //x++;
                }
            }
        }        
    }
    
    
    /*int temp,temp1,i,j,d;

temp=0;
i=0;
d=0;

    while(temp<3){ //0,2,1,2,0
        //d=i; //to track the position of j
        for(j=i;j<n;j++){
          if(a[j]==temp){
              temp1=a[i];
              a[i]=a[j];
              a[j]=temp1;
              i++;
              d=j+1;
          } 
      
    }
     temp++;
     */
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends