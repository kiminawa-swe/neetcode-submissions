/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        unordered_map<Node*,Node*>nodeMap;

        Node* curr=head;

        while(curr!=nullptr){
            Node* new_node=new Node(curr->val);
            nodeMap[curr]=new_node;
            curr=curr->next;

        }

        curr=head;

        while(curr!=nullptr){
            Node* clone=nodeMap[curr];
            
            clone->next=nodeMap[curr->next];
            clone->random=nodeMap[curr->random];
            curr=curr->next;
        }

        return nodeMap[head];
        
    }
};
