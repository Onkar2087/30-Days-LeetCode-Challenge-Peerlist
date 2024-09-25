class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int c = 0;

        while(temp != NULL)
        {
            c++;
            temp = temp->next;
        }
        int num = c-n;

        ListNode* root = head;
        int p=0;

        if(num == 0)
        {
            return head->next;
        }

        while(root != NULL)
        {
            if(p == num-1)
            {
                ListNode* cur = root->next->next;
                root->next = cur;
                break;
            }
            p++;
            root = root->next;
        }
        return head;
    }
};