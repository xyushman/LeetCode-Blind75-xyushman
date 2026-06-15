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
        if(!head || !head->next) return nullptr;

        int len =0;
        ListNode* curr = head;
        while(curr){
            len++;
            curr = curr->next;
        }

        int mid = len /2;

        ListNode* dummy = new ListNode(0,head);

        curr = dummy;
        for(int i=0; i<mid; i++) curr= curr->next;

        curr->next = curr->next->next;

        return head;
    }
};