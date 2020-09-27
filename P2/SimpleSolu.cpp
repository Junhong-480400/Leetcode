class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode *res = new ListNode(-1);//添加虚拟头结点，简化边界情况的判断
            ListNode *cur = res;
            int carry = 0;//表示进位
            while(l1 || l2)
            {
                int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
                carry = sum / 10;
                cur->next = new ListNode(sum % 10);
                cur = cur->next;
                if(l1) l1 = l1->next;
                if(l2) l2 = l2->next;
            }
            if(carry)  cur->next = new ListNode(1);//如果最高位有进位，在最前面补1;
            return res->next;//返回真正的头结点
    }
};
