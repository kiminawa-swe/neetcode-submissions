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
        //edge case

        if(head==nullptr){
            return nullptr;
        }

        //hash map
        unordered_map<Node*,Node*>nodeMap; //will store key(val):value(memory address of key aka clone)

        Node* curr=head;

        while(curr!=nullptr){
            Node* new_node=new Node(curr->val); //this node store same as curr
            //store this relationship in map
            nodeMap[curr]=new_node;
            curr=curr->next;

             }

        //3rd phase

        curr=head; //reset the curr to head 

        while(curr!=nullptr){
            //initialize new_node to store the clone memory address
            Node* clone=nodeMap[curr]; //we got the first clone,,continue

            clone->next=nodeMap[curr->next];
            //the clone 
            clone->random=nodeMap[curr->random];

            //why need clone next and clone random:
            //- it is to always link the first clone to another

            curr=curr->next; 
}

return nodeMap[head];
//Therefore, calling nodeMap[head] retrieves the memory address of Cloned Node 3.




        
    }
};
