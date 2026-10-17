/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool pos(int lenA, int lenB) {
        if((lenA - lenB) > 0) {
            return true;
        }
        else {
            return false;
        }
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != NULL) {
            lenA++;
            tempA = tempA -> next;
        }
        while(tempB != NULL) {
            lenB++;
            tempB = tempB -> next;
        }
        tempA = headA;
        tempB = headB;
        int diff = abs(lenA - lenB);
        if(pos(lenA, lenB)) {
            for(int i = 1; i <= diff; i++) {
                tempA = tempA -> next;
            }
        }
        else {
            for(int i = 1; i <= diff; i++) {
                tempB = tempB -> next;
            }
        }
        while(tempA != tempB) {
            tempA = tempA -> next;
            tempB = tempB -> next;
        }
        return tempA;
    }
};