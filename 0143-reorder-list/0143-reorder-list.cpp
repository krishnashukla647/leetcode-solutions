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
    ListNode* reverse(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL) {
            ListNode* fwd = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = fwd;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast -> next != NULL and fast -> next -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        ListNode* a = head;
        ListNode* b = slow -> next;
        slow -> next = NULL;
        b = reverse(b);
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        ListNode* temp1 = a;
        ListNode* temp2 = b;
        while(temp1 != NULL) {
            temp -> next = temp1;
            temp1 = temp1 -> next;
            temp = temp -> next;
            temp -> next = temp2;
            if(temp2 != NULL) {
                temp2 = temp2 -> next;
            }
            temp = temp -> next;
        }
        head = dummy -> next;
    }
};