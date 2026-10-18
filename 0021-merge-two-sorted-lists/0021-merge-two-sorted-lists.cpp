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
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* k = dummy;
        while(i != NULL and j != NULL) {
            if(i -> val > j -> val) {
                k -> next = j;
                k = k -> next;
                j = j -> next;
            }
            else {
                k -> next = i;
                k = k -> next;
                i = i -> next;
            }
        }
        if(j == NULL) {
            k -> next = i;
        }
        else {
            k -> next = j;
        }
        return dummy -> next;
    }
};