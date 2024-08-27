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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || (!head->next && n == 1)) return nullptr;
        ListNode* p = head;
        ListNode* q = nullptr;
        int count = 0;
        while(p){
            p = p->next;
            count++;
        }
        if(n > count) return head;
        p = head;
        int k = count-n;
        if (k == 0) {
            head = head->next;
            delete p;
            return head;
        }
        for (int i = 0; i<k && p; i++){
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
        return head;
    }
};
