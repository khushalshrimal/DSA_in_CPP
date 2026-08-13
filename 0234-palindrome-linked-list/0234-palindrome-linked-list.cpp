/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
         ListNode* copyhead = new ListNode(head->val);
         ListNode* temp = head->next;
         ListNode* copy = copyhead;

while (temp != NULL) {
    copy->next = new ListNode(temp->val);
    copy = copy->next;
    temp = temp->next;
}
        ListNode* current=head;
        ListNode* prev=NULL;
        while(current!=NULL){
            ListNode* newnode=current->next;
            current->next=prev;
            prev=current;
            current=newnode;

        }
        while(copyhead!=NULL){
            if(copyhead->val!=prev->val){
                return false;
            }
            copyhead=copyhead->next;
            prev=prev->next;

        }
        return true;
        
    }
};