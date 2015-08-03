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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre = head;
        ListNode* current = head;
        while(current != NULL) {
            if(head->val == val) {
                head = head->next;
                current = head;
            } else if(current->val != val) {
                pre = current;
                current = current->next;
            } else {
                pre->next = current->next;
                current = current->next;
            }
        }
        return head;
    }
};