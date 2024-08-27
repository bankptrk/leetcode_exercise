/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* p = new ListNode();
        ListNode* q = new ListNode();
        ListNode* small = p;
        ListNode* greater = q;
        while(head){
            if(head->val < x){
                small->next = head;
                small = small->next;
            }else{
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        small->next = q->next;
        greater->next = nullptr;
        return p->next;
    }
};