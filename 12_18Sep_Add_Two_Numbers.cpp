class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* tail = head;
        int carry = 0;

        while(l1 != NULL || l2 != NULL || carry!=0)
        {
            int val1 = (l1 == NULL) ? 0 : l1->val;
            int val2 = (l2 == NULL) ? 0 : l2->val;
            int n = val1 + val2 + carry;
            ListNode* node = new ListNode(n%10);
            carry = n/10;
            tail->next = node;
            tail = tail->next;

            l1 = (l1 == NULL) ? NULL : l1->next;
            l2 = (l2 == NULL) ? NULL : l2->next;
        }
        ListNode* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
};