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
        ListNode* current=head;
        unordered_set<ListNode*> mp;
        while(current!=NULL){
        if(mp.find(current)!=mp.end()){
            return true;
        }
        mp.insert(current);
        current=current->next;
        }
        return false;
        
    }
};