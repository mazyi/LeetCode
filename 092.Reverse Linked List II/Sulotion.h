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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int count = 1;
        ListNode* current = head;
        ListNode* pre = NULL;
        ListNode* next;
        ListNode* began = head;
        ListNode* beforeBegan;
        while(count != m) {
            beforeBegan = current;
            current = current->next;
            began = current;
            count++;
        }
        
        while(count <= n) {
            count++;
            next = current->next;
            current->next = pre;
            pre = current;
            current = next;
        }
        began->next = current;
        if(m == 1) {
            return pre;
        }
        beforeBegan->next = pre;
        return head;
        
    }
};