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
         ListNode* current=head;
        set<ListNode*> mp;
        while(current!=NULL){
        if(mp.find(current)!=mp.end()){
           return current;
        }
        mp.insert(current);
        current=current->next;
        }
        return NULL;
        
        
    }
};