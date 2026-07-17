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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* res = new ListNode(0);
        ListNode *temp=res;
        int car=0;
        while(l1 && l2){
            ListNode* store = new ListNode(0);
            int dig = l1->val+l2->val+car;
            if(dig>=10){
                dig=dig-10;
                car=1;
            }
            else car=0;
            store->val=dig;
            temp->next=store;
            temp=store;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            ListNode* store = new ListNode(0);
            int dig = l1->val+car;
            if(dig>=10){
                dig=dig-10;
                car=1;
            }
            else car=0;
            store->val=dig;
            temp->next=store;
            temp=store;
            l1=l1->next;
        }
        while(l2){
            ListNode* store = new ListNode(0);
            int dig = l2->val+car;
            if(dig>=10){
                dig=dig-10;
                car=1;
            }
            else car=0;
            store->val=dig;
            temp->next=store;
            temp=store;
            l2=l2->next;
        }
        if(car==1){
            ListNode *store = new ListNode(1);
            temp->next=store;
        }
        return res->next;
    }
};