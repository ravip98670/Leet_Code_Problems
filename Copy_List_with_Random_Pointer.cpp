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
        if(head==NULL){
            return NULL;
        }
       
        Node *curr = head;
        
        while(curr != NULL){
            Node *temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr = temp;
        }
        Node *temp = head;
        while(temp != NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        
        
        
        
        temp = head;
        while(temp != NULL){
            
            Node *dum = temp->random;
            if(dum == NULL)
                temp->next->random = NULL;
            else
                temp->next->random = dum->next;
            temp = temp->next->next;
        }
        
        Node *newHead =NULL;
        Node *mov1=NULL;
        Node *t = NULL;
        Node *mov2=NULL;
        temp = head;
        while(temp != NULL){
            if(newHead==NULL){
                newHead=temp;
                mov1=newHead;
                t=newHead->next;
                mov2=t;
                // mov1->next=temp->next->next;
                temp=temp->next->next;
                continue;
            }
            cout<<mov1->val<<":"<<mov2->val<<" ";
            
            mov1->next=temp;
            
            mov2->next=temp->next;
            mov1=mov1->next;
            mov2=mov2->next;
            temp=temp->next->next;
            
        }
        mov1->next=temp;
        mov2->next=NULL;
            // temp=temp->next->next;
            
        return t;
    }
};