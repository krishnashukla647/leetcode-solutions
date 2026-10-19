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
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head -> next == NULL) {
            return head;
        }    
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast -> next != NULL and fast -> next -> next != NULL) {
            slow = slow -> next;
            fast = fast -> next -> next; 
        }
        ListNode* head2 = slow -> next;
        slow -> next = NULL;
        head = sortList(head);
        head2 = sortList(head2);
        return mergeTwoLists(head, head2);
    }
};