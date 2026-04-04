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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(0);
        ListNode* head = dummy;
        while(list1 != nullptr && list2 != nullptr) {
            int nd1 = list1 -> val;
            int nd2 = list2 -> val;
            if(nd2 <= nd1) {
                dummy -> next = list2;
                list2 = list2 -> next;
            } 
            else {
                dummy -> next = list1;
                list1 = list1 -> next;
            }

            dummy = dummy -> next;
        }

        if(list1 != nullptr) 
            dummy -> next = list1;

        if(list2 != nullptr) 
            dummy -> next = list2;

        head = head -> next;
        return head;
    }
};
