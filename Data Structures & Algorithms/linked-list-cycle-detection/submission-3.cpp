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
    bool hasCycle(ListNode* head) {
        //using hash set

        unordered_set<ListNode*>ptr_set;
        ListNode* curr=head;

        while(curr!=nullptr){
            if(ptr_set.count(curr)){
                return true;
            }
            ptr_set.insert(curr);
            curr=curr->next;
        }
        return false;
        
    }
};
