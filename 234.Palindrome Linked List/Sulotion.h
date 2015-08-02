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
    ListNode* reverse(ListNode * head) {
        ListNode* next;
        ListNode* pre = NULL;
        
        if(head == NULL || head->next == NULL) {
            return head;
        }
        
        while(head != NULL) {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        
        return pre;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* first = head;
        
        while(fast->next != NULL && fast->next->next != NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode* second = reverse(slow->next);
        
        while(second != NULL) {
            if(first->val != second ->val) {
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};