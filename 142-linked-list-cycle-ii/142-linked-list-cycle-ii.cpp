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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>ump;
        ListNode* a=head;
        if(a==NULL)
        {
            return(NULL);
        }
        while(a->next!=NULL && !ump[a->next])
        {
            ump[a]=1;
            a=a->next;
        }
        if(a->next==NULL)
        {
            return(NULL);
        }
        else
        {
            return(a->next);
        }

    }
};