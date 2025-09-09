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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    /*
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* temp1=list1;
        ListNode* temp2=list2;
        ListNode *res;
        if(temp1->val>temp2->val){
            res=temp2;
            temp2=temp2->next;
        }
        else {
            res=temp1;
            temp1=temp1->next;
        }
        ListNode*head=res;
        while(temp1 && temp2){
            if(temp1->val>temp2->val){
                res->next=temp2;
                temp2=temp2->next;
            }
            else {
                res->next=temp1;
                temp1=temp1->next;
            }
            res=res->next;
        }
        while(temp1){
            res->next=temp1;
            temp1=temp1->next;
            res=res->next;
        }
        while(temp2){
            res->next=temp2;
            temp2=temp2->next;
            res=res->next;
        }   
        return head;*/

    //Way 2: Recursion
        if(!list1) return list2;
        if(!list2) return list1;  

        if(list1->val>list2->val){
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }else{
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
    }
};