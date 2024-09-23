class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* temp = NULL;
        ListNode* cur = head;

        while(cur != NULL)
        {
            temp = cur -> next;
            cur -> next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }
};