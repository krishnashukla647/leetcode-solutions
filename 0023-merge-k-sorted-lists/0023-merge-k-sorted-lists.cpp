class Solution {
public:
    ListNode* merge(ListNode* list1, ListNode* list2) {
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
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        if(arr.size() == 0) {
            return NULL;
        }
        while(arr.size() > 1) {
            ListNode* a = arr[arr.size()-1];
            arr.pop_back();
            ListNode* b = arr[arr.size()-1];
            arr.pop_back();
            ListNode* c = merge(a, b);
            arr.push_back(c);
        }
        return arr[0];
    }
};