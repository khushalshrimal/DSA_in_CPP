/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* current=head;
        while(current!=NULL){
            if(current->child!=NULL){
                Node* next=current->next;
                Node* child=current->child;
                current->next=child;
                child->prev=current;
                current->child=NULL;

                Node* last=flatten(child);
                 while (last->next != NULL) {
                    last = last->next;
                }

                if(next!=NULL){
                    last->next=next;
                    next->prev=last;
                }

            }
            current=current->next;


        }
        return head;
    }
};