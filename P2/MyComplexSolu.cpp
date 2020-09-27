class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int add = 0;
        int temp;
        ListNode* tempPtr, * head;
        if (l1 && l2)
        {
            for (int i = 0; l1 && l2; l1 = l1->next, l2 = l2->next)
            {
                temp = l1->val + l2->val + add;
                add = 0;
                if (i == 0)
                {
                    if (temp >= 10)
                    {
                        temp = temp - 10;
                        add = 1;
                    }
                    head = new ListNode(temp);
                    tempPtr = head;
                    i++;
                }
                else
                {
                    if (temp >= 10)
                    {
                        temp = temp - 10;
                        add = 1;
                    }
                    tempPtr->next = new ListNode(temp);
                    tempPtr = tempPtr->next;
                }
            }
        }
        else
        {
            if (l1)
            {
                return l1;
            }
            else
            {
                return l2;
            }
        }

        if (l1)
        {
            for (; l1; l1 = l1->next)
            {
                temp = l1->val + add;
                add = 0;
                if(temp>=10)
                {
                    temp = temp - 10;
                    add = 1;
                }
                tempPtr->next = new ListNode(temp);
                tempPtr = tempPtr->next;
            }
        }
        else
        {
            
        }

        if (l2)
        {
            for (; l2; l2 = l2->next)
            {
                temp = l2->val + add;
                add = 0;
                if(temp>=10)
                {
                    temp = temp - 10;
                    add = 1;
                }
                tempPtr->next = new ListNode(temp);
                tempPtr = tempPtr->next;
            }
        }

        if (add > 0)
        {
            tempPtr->next = new ListNode(1);
        }
        return head;
    }
};
