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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        int carry = 0;
        while(l1 || l2 || carry) {
            int v1 = l1 ? l1 -> val : 0;
            int v2 = l2 ? l2 -> val : 0;
            int count  = v1 + v2 + carry;
            int digit = count % 10;
            carry = count / 10;
            ListNode* temp = new ListNode(digit);
            dummy -> next = temp;
            dummy = dummy -> next;
            if(l1)
                l1 = l1 -> next;
            if(l2)
                l2 = l2 -> next;
        }

        ListNode* newHead = cur -> next;
        delete cur;
        return newHead;
    }
};
