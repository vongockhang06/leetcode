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
        //Way 1: directly
        stack <int> a;
        ListNode *b=head;
        while(b){
            a.push(b->val);
            b=b->next;
        }
        b=head;
        while(a.size()!=0){
            if(a.top()!=b->val) return false;
            a.pop();
            b=b->next;
        }
        return true;
    }
};