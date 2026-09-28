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
         ListNode* lista = headA;
        ListNode* listb = headB;

        while (lista != listb) {

            if (lista == nullptr) {
                lista = headB;
            } 
            else {
                lista = lista->next;
            }

            if (listb == nullptr) {
                listb = headA;
            } 
            else {
                listb = listb->next;
            }
        }

        return lista;
    }
};