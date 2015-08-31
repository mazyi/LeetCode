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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head_1 = l1;
        ListNode* head_2 = l1;
        
        while(l1->next != NULL && l2->next != NULL) {
            l1->val = l1->val + l2 ->val;
            l1 = l1->next;
            l2 = l2->next;
        }
        
        if(l1->next == NULL && l2->next == NULL) {
            l1->val = l1->val + l2->val;
        } else if( l1-> next == NULL){
            l1->val = l1->val + l2->val;
            l1->next = l2->next;
        } else {
            l1->val = l1->val + l2->val;
        }
        
        while(head_2->next != NULL) {
            if(head_2->val >9) {
                head_2->val = head_2->val % 10;
                head_2->next->val += 1;
            }
            head_2 = head_2->next;
        }
        
        if(head_2->val > 9) {
            head_2->val = head_2->val % 10;
            ListNode* end = new ListNode(1);
            head_2->next = end;
        }
        
        return head_1;
        
    }

};