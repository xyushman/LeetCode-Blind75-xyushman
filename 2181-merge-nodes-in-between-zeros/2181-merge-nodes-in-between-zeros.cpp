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
    ListNode* mergeNodes(ListNode* head) {
        // vector<ListNode*> v;
        int ans= 0;
        ListNode* temp = head->next;
        ListNode* temp1= head;
        while(temp!=nullptr){
            if(temp->val !=0) {
                ans+=temp->val;
            }
            else{
                ListNode* a = new ListNode(ans);
                
                temp1->next = a;
                temp1=a;
                // temp1 = temp->next;
                ans=0;
                // delete a; 
            }
            temp = temp->next;
        }
        return head->next;
    }
};