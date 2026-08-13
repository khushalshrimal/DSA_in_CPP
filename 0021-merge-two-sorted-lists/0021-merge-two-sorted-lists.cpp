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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL)
            return list2;

        if(list2 == NULL)
            return list1;


        if(list2->val < list1->val) {
            ListNode* temp = list1;
            list1 = list2;
            list2 = temp;
        }

        ListNode* current1=list1;
        ListNode* current2=list2;
        while(current1!=NULL && current2!=NULL){
        if(current1->next == NULL || current1->next->val >= current2->val){
            ListNode* newnode=current2;
            ListNode* temp=current1->next;
            ListNode* next2=current2->next;
            current1->next=newnode;
            current1->next->next=temp;
            current1=current1->next;
            current2=next2;

        }
        else{
            current1=current1->next;
        }
        
        }
        if(current2!=NULL){
            current1->next=current2;
        }
        return list1;
        
    }
};