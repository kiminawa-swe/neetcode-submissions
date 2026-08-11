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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //we set up dummy node (initialize with head ) for both fast and slow pointer
        ListNode dummy;
        dummy.next=head;

        ListNode* fast=&dummy;
        ListNode* slow=&dummy;

        //we want to give n step ahead for fast pointer
        for(int i=0;i<n;i++){
            fast=fast->next;
        }

        while(fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next;
        }
        //we perform deletion after the while loop

        slow->next=slow->next->next; // we skip a pointer here
        
        return dummy.next;
        
    }
};
