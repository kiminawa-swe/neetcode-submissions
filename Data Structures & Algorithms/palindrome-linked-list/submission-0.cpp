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

        //cloning the head to newHead 

        ListNode* curr=head; //look in original list

        ListNode* newHead=nullptr; //we attach clone here
        ListNode* newCurr=nullptr; //we use this as marker

        while(curr!=nullptr){
            ListNode* newNode=new ListNode(curr->val);
            if(newHead==nullptr){
                //if its the first in list
                newHead=newNode;
                newCurr=newHead; //put newCurr same position as head, remember the head of train ;
            }
            else{
                newCurr->next=newNode;
                newCurr=newCurr->next; //move the marker to current node

            }
            curr=curr->next; //move original node list 

        }
        //now we got the node copy "newHead"

        //reverse the newHead

        ListNode* prev=nullptr;
        ListNode* revCurr=newHead;

        //reversing the newHead
        while(revCurr!=nullptr){
            ListNode* next=revCurr->next;
            revCurr->next=prev;
            prev=revCurr;

            revCurr=next;
        }
        //prev is the newHead's reverse

        //compare
        //return prev==head; false: because here we only compare the memory address
        while(prev!=nullptr){
            ListNode* next1=prev->next;
            ListNode* next2=head->next;
            if((prev->val)==(head->val)){
                prev=next1;
                head=next2;
            }
            else{
                return false;
            }
            }
           return true; 
        }
        

    


    
};