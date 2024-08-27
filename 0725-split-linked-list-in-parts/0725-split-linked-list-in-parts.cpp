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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* curr = head;
        int n = 0;
        while(curr){
            curr = curr->next;
            n++;
        }
        int size = n/k, rem = n%k;
        ListNode* prev = nullptr;
        curr = head;
        vector<ListNode*> ans;
        while(head){
            int eachpart = size;
            ans.push_back(head);
            while(eachpart > 0){
                prev = curr;
                curr = curr->next;
                eachpart--;
            }
            if(rem > 0 && curr){
                rem--;
                prev = curr;
                curr = curr->next;
            }
            if(prev){
                head = curr;
                prev->next = nullptr;
            }
        }
        while(ans.size() < k) ans.push_back(nullptr);
        return ans;
    }
};