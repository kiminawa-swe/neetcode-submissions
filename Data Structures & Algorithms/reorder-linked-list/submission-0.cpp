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
        //method for even-list 

        ListNode* slow=head;
        ListNode* fast=head->next; //start one pointer after the slow

        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next; //move fast pointer two at a time
        }
        //once it hit the base case , it mean: slow is in the middle
        
        ListNode* second=slow->next; //we take the second half 
         slow->next=nullptr; //first half 
        
        //here we want to reverse the second half pointer list
        ListNode* prev=nullptr;
        ListNode* curr=second;

        while(curr!=nullptr){
            ListNode* next=curr->next;
            curr->next=prev;//reverse pointer
            prev=curr;
            curr=next;
        }

        //after reversed the second half we want to merge it
        //just now we have two pointer which is , head, and prev

        ListNode* l1=head;
        ListNode* l2=prev;

        while(l1!=nullptr &&l2!=nullptr){
            ListNode* next1=l1->next;
            ListNode* next2=l2->next;

            l1->next=l2;
            l2->next=next1;
            //zig zag pattern

            //then shift pointer forward

            l1=next1;
            l2=next2;




        }


        

    }
};
