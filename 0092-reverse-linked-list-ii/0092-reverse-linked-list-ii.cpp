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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // for left==1 kyoki left equal to one pr alag condition hai
        if(left==1){
            ListNode* rev=head;
            ListNode* current=head;
            for(int i=1;i<right;i++){
                current=current->next;
            }
            ListNode*temp=current->next;
            current->next=NULL;
            ListNode* prev=NULL;
            ListNode* current2=rev;
            while(current2!=NULL){
                ListNode* temp1=current2->next;
                current2->next=prev;
                prev=current2;
                current2=temp1;
            }
            rev->next=temp;
            return prev;
        }

        ListNode* current=head;
        for(int i=1;i<left-1;i++){
            current=current->next;
        }
        ListNode* temp1=current;
        ListNode* rev=current->next;
        current=head;
        for(int i=1;i<right;i++){
            current=current->next;
        }
        ListNode*  temp2=current->next;
        current->next=NULL;
        temp1->next=NULL;
        ListNode* prev=NULL;
        ListNode* current1=rev;
        while(current1!=NULL){
            ListNode* temp=current1->next;
            current1->next=prev;
            prev=current1;
            current1=temp;
        }
        temp1->next=prev;
        ListNode* current2=temp1;
        while(current2->next!=NULL){
            current2=current2->next;
        }
        current2->next=temp2;
        return head;
        
    }
};