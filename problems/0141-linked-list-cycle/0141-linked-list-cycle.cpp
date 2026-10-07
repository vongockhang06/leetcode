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
    bool hasCycle(ListNode *head) {
        // way 1: Two pointers
        /*if(!head) return false;
        ListNode *slow=head,*fast=head;
        while(fast&&fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
        */

        //WAY 2
        //: Hash table
        unordered_map <ListNode*,int> table;
        ListNode* temp=head;
        while(temp){
            if(table.find(temp)!=table.end()) return true;
            else table[temp]=1;
            temp=temp->next;
        }
        return false;
    }
};