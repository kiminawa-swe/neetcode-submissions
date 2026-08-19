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
    void reorderList(ListNode* head) {
        ListNode* fast=head->next;
        ListNode* slow=head;
        

        while(fast!=nullptr&&fast->next!=nullptr){
            fast=fast->next->next;
            slow=slow->next;
        }
        //ListNode* second=slow->next;
        ListNode* second;
        second=slow->next;
        slow->next=nullptr;

        //reverse second half
        ListNode* prev=nullptr;
        ListNode* curr=second;

        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        //slow=head;
        //merging
        ListNode* l1=head;
        ListNode* l2=prev;

        while(l1!=nullptr&&l2!=nullptr){
            ListNode* next1=l1->next;
            ListNode* next2=l2->next;

            l1->next=l2;
            l2->next=next1;

            l1=next1;
            l2=next2;
        }

        


    }
};
