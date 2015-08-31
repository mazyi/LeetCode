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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) {
            return NULL;
        }
        ListNode* s1 = headA, *s2 = headB;
        int dis = getdis(s1, s2);
        dis>=0? moveHead(dis, headA) : moveHead(-dis, headB);
        while (headA != headB) {
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
    
    int getdis(ListNode* s1, ListNode* s2) {
        int i = 0;
        while (s1&&s2) {
            s1 = s1->next;
            s2 = s2->next;
        }
        if (s1){
            while (s1){ s1 = s1->next; i++; }
        }
        else
        while (s2){ s2 = s2->next; i--; };
        return i;
    }
    
    void moveHead(int i, ListNode*& n) {
        while (i > 0 && n) {
            n = n->next;
            i--;
        }
    }
    
};