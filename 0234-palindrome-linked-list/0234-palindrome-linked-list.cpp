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
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* p = head;
        vector<int> ans;
        while(p){
            ans.push_back(p->val);
            p = p->next;
        }
        reverse(ans.begin(),ans.end());
        p = head;
        int i = 0;
        while(p){
            if(p->val != ans[i++]) return false;
            else p = p->next;
        }
        return true;
    }
};