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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) {
            return head;
        }
        ListNode* first = head;
        ListNode* second = head->next;
        while(true) {
            if(second == NULL) {
                return  head;
            }else if(first->val == second->val) {
                first->next = second->next;
                second = second->next;
            } else {
                first = first->next;
                second = second->next;
            }
        }
    }
};