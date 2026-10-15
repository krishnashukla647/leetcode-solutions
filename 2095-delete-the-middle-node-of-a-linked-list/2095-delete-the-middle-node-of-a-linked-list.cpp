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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL) return NULL;
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        if (length == 1) {
            return NULL;
        }
        temp = head;
        for (int i = 0; i < length / 2 - 1; i++) {
            temp = temp->next;
        }
        ListNode* toBeDeleted = temp->next;
        temp->next = toBeDeleted->next;
        return head;
    }
};