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
        //brute force solution

        //initialize the array to store the node

        vector<ListNode*> nodes;

        ListNode* curr=head;

        while(curr!=nullptr){
            nodes.push_back(curr);
            curr=curr->next;
        }
        
        //after storing we need to use the removeIndex to remove the num
        int removeIndex=nodes.size()-n; //finding the position to be removed

        if(removeIndex==0){
            return head->next;

        }

        //skip /delete the selected node

        nodes[removeIndex-1]->next=nodes[removeIndex]->next;

        return head;
    }
};
