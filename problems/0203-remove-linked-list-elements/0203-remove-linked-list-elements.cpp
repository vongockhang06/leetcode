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
    ListNode* removeElements(ListNode* head, int val) {
    //WAY1
    /*
        if(!head) return NULL;
        while(head->val==val){
            head=head->next;
            if(!head) return head;
        }
        if(head)
            head->next=removeElements(head->next,val);
        return head;
    */
    //WAY2
        if(!head) return NULL;
        ListNode*after=head;
        ListNode *pre=NULL;
        while(after){
            if(after->val==val){
                while(after->val==val){
                    after=after->next;
                    if(!after) break;
                }
                if(!pre) {head=after;
                if(!head) return NULL;}
                else pre->next=after;
                if(after){
                    pre=after;
                    after=pre->next;
                }
            }
            else {
                pre=after;
                after=pre->next;
            }
        }
        return head;
    }
};