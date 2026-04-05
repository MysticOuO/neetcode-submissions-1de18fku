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
        int cnt = 1;
        ListNode* count = head;
        while(count -> next) {
            count = count -> next;
            ++cnt;
        }

        int pos = cnt - n;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* cur = dummy;
        while(pos) {
            cur = cur -> next;
            --pos;
        }

        cur -> next = cur -> next -> next;
        ListNode* newHead = dummy -> next;
        delete dummy;
        return newHead;
    }
};
