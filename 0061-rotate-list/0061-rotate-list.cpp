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
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            len++;
            temp = temp -> next;
        }
        if(head == NULL || head->next == NULL || k == 0) {
            return head;
        }
        k = k % len;
        int mov;
        if(k != 0) {
            mov = abs(len - k);
        }
        else {
            return head;
        }
        ListNode* a = head;
        ListNode* b;
        ListNode* c = head;
        for(int i = 0; i < mov-1; i++) {
            a = a -> next;
        }
        b = a -> next;
        while(c -> next != NULL) {
            c = c -> next;
        }
        a -> next = NULL;
        c -> next = head;
        head = b;
        return head;
    }
};