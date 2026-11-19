
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* first = dummy;
        ListNode* second = dummy;

        // Move first pointer n+1 steps
        for (int i = 0; i <= n; i++) {
            first = first->next;
        }

        // Move both pointers
        while (first != NULL) {
            first = first->next;
            second = second->next;
        }

        // Delete the required node
        ListNode* temp = second->next;
        second->next = second->next->next;
        delete temp;

        return dummy->next;
    }
};
