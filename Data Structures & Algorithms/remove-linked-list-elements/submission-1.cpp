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
        // ListNode* curr=head;
        // ListNode* prev=head;
        //first base case : ensure head is not null, and not val

        while(head!=nullptr&&head->val==val){
            head=head->next;
        }
        
        ListNode* curr=head;//modified head 
        ListNode* prev=head;
        while(curr!=nullptr){
            //if curr = val we need to skip or slice it

            if(curr->val==val){
                prev->next=curr->next;
                curr=curr->next; //move immediately 
            }
            else{
                prev=curr;
                curr=curr->next;
            }
             
            
        }
        return head;
    }
};