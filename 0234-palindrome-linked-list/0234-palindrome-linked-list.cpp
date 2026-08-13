class Solution {
public:
    bool isPalindrome(ListNode* head) {

        // 1. Find middle using slow and fast
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. Reverse second half
        ListNode* prev = NULL;

        while (slow != NULL) {
            ListNode* nextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextNode;
        }

        // 3. Compare first half and reversed second half
        ListNode* first = head;
        ListNode* second = prev;

        while (second != NULL) {
            if (first->val != second->val) {
                return false;
            }

            first = first->next;
            second = second->next;
        }

        return true;
    }
};