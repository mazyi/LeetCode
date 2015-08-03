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
    ListNode* reverseList(ListNode* head) {
        ListNode* next;
        ListNode* pre = NULL;
        while(head != NULL) {
            next = head->next;
            head->next = pre;
            pre = head;
            head = next;
        }
        return pre;
    }
    
    ListNode* removeNode(ListNode* head,int n) {
        int count = 1;
        ListNode* node = head;
        ListNode* next = node->next;
        if(n == 1) {
            return node->next;
        }
        
        while(count != n-1) {
            node = node->next;
            next = node->next;
            count += 1;
        }
        node->next = next->next;
        return head;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* newHead = reverseList(head);
        newHead = removeNode(newHead,n);
        return reverseList(newHead);
    }
};