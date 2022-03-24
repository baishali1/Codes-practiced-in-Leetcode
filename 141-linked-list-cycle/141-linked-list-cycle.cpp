/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *a;
        int count=0;
      
        
        for(a=head;a!=NULL;a=a->next){
            count++;
            if(count>10000){
                return(true);
            }
            
        }
        return(false);
        
    }
};