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
        if(head == NULL or head -> next == NULL) {
            return head;
        }
        ListNode* a = head -> next;
        ListNode* newHead = reverse(a);
        a -> next = head;
        head -> next = NULL;
        return newHead;
    }
    bool isPalindrome(ListNode* head) {
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
        ListNode* t1 = a;
        ListNode* t2 = b;
        bool flag = true;
        while(t2 != NULL) {
            if(t1 -> val != t2 -> val) {
                flag = false;
                break;
            }
            t1 = t1 -> next;
            t2 = t2 -> next;
        }
        slow -> next = reverse(b); //To maintain the original Linked List.
        return flag;
    }
};