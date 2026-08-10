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

        ListNode* slow=head;
        ListNode* fast=head->next;
        ListNode* second;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        second=slow->next;
        
        slow->next=nullptr; 

        //reverse the second pointer
        ListNode* curr=second;
        ListNode* prev=nullptr;
        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;

        }
        
        //merge the two pointer ,head, and prev
        ListNode* list1=head;
        ListNode* list2=prev;

        while(list2!=nullptr){
            ListNode* next1=list1->next;
            ListNode* next2=list2->next;

            list1->next=list2;
            list2->next=next1;

            list1=next1;
            list2=next2;
        }





        
    }
};
