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
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;

        int carry=0;
        while(l1!=nullptr||l2!=nullptr||carry!=0){
            //extract value
            int val1=(l1!=nullptr)?l1->val:0;
            int val2=(l2!=nullptr)?l2->val:0;

            int sum=val1+val2+carry;

            //check sum whether more or less than 10
            carry=sum/10; //if the sum eg: 7, 7/10, will be 0
            int digit=sum%10; // sum 7, int digit will be 7

            curr->next=new ListNode(digit);
            curr=curr->next;

            if(l1!=nullptr)l1=l1->next;
            if(l2!=nullptr)l2=l2->next;
        }

        return dummy->next;
    }
};
