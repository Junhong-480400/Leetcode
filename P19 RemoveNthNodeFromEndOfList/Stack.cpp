class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        stack<ListNode*> stk;
        ListNode* cur = dummy;
        while (cur) {
            stk.push(cur);
            cur = cur->next;
        }
        for (int i = 0; i < n; ++i) {
            stk.pop();
        }
        ListNode* prev = stk.top();
        ListNode* tmpPtr = prev->next;
        prev->next = prev->next->next;
        ListNode* ans = dummy->next;
        delete dummy;
        delete tmpPtr;
        return ans;
    }
};
