// { Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



 // } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        
       /* Node *a;
        a=head;
        int count=1;
        int i=0;
        int j;
        
        while(a->next!=NULL){
            count++;
            a=a->next;
          
        }
        int b[count]={};
        
        a=head;
        
        while(a->next!=NULL){
            b[i]=a->data;
            a=a->next;
            i++;
        }
        
        if (a->next==NULL){
            b[i]=a->data;
        }
        
       
        
        a=head;
        while(a->next!=NULL){
            a->data=b[i];
            i--;
            a=a->next;
        }
        if (a->next==NULL){
            a->data=b[i];
        }
        
       return(head);  */
       
     ////////////////////////////////////////////////////////////////////////      
      
        Node *a;
        a=head;
        int count=1;
        int i=0;
        int j;
        
        for(a=head;a->next!=NULL;a=a->next){
            count++;
        }
        
        int b[count]={};
        
        for(a=head;a->next!=NULL;a=a->next){
            b[i]=a->data;
            i++;
        }
        
        if (a->next==NULL){
            b[i]=a->data;
        }
    
        for(a=head;a->next!=NULL;a=a->next){
            a->data=b[i];
            i--;
        }
        
        if (a->next==NULL){
            a->data=b[i];
        }
        
       return(head);
             
        
    }
    
};
    


// { Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}

  // } Driver Code Ends