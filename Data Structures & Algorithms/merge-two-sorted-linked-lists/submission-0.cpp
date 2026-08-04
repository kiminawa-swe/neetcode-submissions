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
        ListNode dummy; //create an empty node for dummy 
        ListNode* tail=&dummy;// start with empty ListNode() : val(0), next(nullptr) {}
        
        ListNode* p1=list1;
        ListNode* p2=list2;

        while(p1 !=nullptr && p2 !=nullptr){
            if((p1->val)<=(p2->val)){
                tail->next=p1; //attach to dummy node
                p1=p1->next;   //move the p1 node to the next node
            }
            else{
                tail->next=p2;
                p2=p2->next;
            }
            tail=tail->next; //we move tail current position to next 


        }

        // if one of the list hit the nullptr first we need to look for it
        //to get the remaining value
        if(p1==nullptr){
            tail->next=p2;
        }
        else{
            //if p2 hit nullptr
            tail->next=p1;
        }
        

        //return dummy; //cant because dummy only is an object no a pointer
        return dummy.next;


    }
};
