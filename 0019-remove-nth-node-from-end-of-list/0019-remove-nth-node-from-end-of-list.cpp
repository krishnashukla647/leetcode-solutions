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
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            length++;
            temp = temp -> next;
        }
        if(length == 1) {
            return NULL;
        }
        int idx = length - n;
        temp = head;
        if (idx == 0) {
            return head->next;
        }
        for(int i = 0; i < idx - 1; i++) {
            temp = temp -> next;
        }
        ListNode* toBeDeleted = temp -> next;
        temp -> next = toBeDeleted -> next;
        return head;
    }
};