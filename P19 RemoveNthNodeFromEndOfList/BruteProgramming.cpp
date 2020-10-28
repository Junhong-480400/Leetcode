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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* tmpPtr = head;
        int len = 0;
        while(tmpPtr != NULL){
            len ++;
            tmpPtr = tmpPtr->next;
        }
        ListNode* dummy = new ListNode(0, head);
        tmpPtr = dummy;
        for(int i = 0; i < len - n; i++){
            tmpPtr = tmpPtr->next;
        }
        ListNode* tmpPtr2 = tmpPtr->next;
        tmpPtr->next = tmpPtr->next->next;
        delete tmpPtr2;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
