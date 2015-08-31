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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        //speed up
        if(NULL == l1) return l2;
        if(NULL == l2) return l1;
        ListNode res(0);
        ListNode *curRes = &res;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val)
            {
                curRes->next = l1;
                l1 = l1->next;
            }else
            {
                curRes->next = l2;
                l2 = l2->next;
            }
            curRes = curRes->next;
        }
        curRes->next = l1 ? l1 : l2;
        return res.next;
    }
    }
};