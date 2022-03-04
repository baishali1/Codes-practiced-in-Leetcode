// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


 // } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        
        Node* a;
        Node* b;
        Node* c;
        Node* d;
        c=head;
        int i;
        int count=1;
        
        for(a=head;a->next!=NULL;a=a->next){
            count++;
        }
      
      
        if(k==count){
            return(head);
        }
        
        a=head;
        while(a->next!=NULL){
            a=a->next;
        }
        if(a->next==NULL){
            a->next=head;
        }
        
        a=c;
        for(i=1;i<k;i++){
            a=a->next;
        }
        
        b=a->next;
        a->next=NULL;
        //d=b;
        //while(d!=NULL){
           // cout<<d->data<<endl;
           // d=d->next;
        //}
        return(b);
        
    }
};
    


// { Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}
  // } Driver Code Ends