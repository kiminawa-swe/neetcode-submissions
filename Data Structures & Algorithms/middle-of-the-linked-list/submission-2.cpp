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
    ListNode* middleNode(ListNode* head) {

        ListNode* len =head;
        int count =0;//this will be the length of node
        if(head->next==nullptr){
            return head;
        }
        while(len!=nullptr&&len->next!=nullptr){
            count++;
            len=len->next;

        }
        ListNode* fast=nullptr;
        int mid=(count)/2; //we got the middle 
        ListNode* slow=head;
        if(count%2==0){
            for(int i=0;i<mid-1;i++){
            slow=slow->next;
        }
        fast=slow->next;
        }
        else{
            for(int i=0;i<mid;i++){
            slow=slow->next;
        }
        fast=slow->next;

        }
        
        
       
        
        
    return fast;
        
    }
};