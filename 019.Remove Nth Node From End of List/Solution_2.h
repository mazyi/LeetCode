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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *front = head, *back= head;
	    while (front) {
	    	front = front->next;
	    	if (n-- < 0) back = back->next;
	    }
	    if (n == 0) head = head->next;
	    else back->next = back->next->next;
	    return head;
    }
};