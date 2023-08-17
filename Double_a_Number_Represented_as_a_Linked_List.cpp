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
    ListNode* reverse(ListNode* head){
         ListNode* prev = NULL;
        ListNode* current = head;

        while (current) {
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }

        return prev;
}
    
    
    ListNode* doubleIt(ListNode* head) {
        if (head == NULL )
            return head;

        head = reverse(head);
        
        int carry = 0;

        ListNode* curr = head;
        ListNode* temp = NULL;
        
        while(curr !=   NULL){
            int data = curr->val*2 + carry;
            carry = data/10;
            data = data%10;
        
        
        if(temp == NULL)
                temp = new ListNode(data);
        else{
                ListNode* newN = new ListNode(data);
                newN->next = temp;
                temp = newN;
        }
        curr = curr->next;
        
    }
        if (carry > 0) {
            ListNode* newN = new ListNode(carry);
            newN->next = temp;
            temp = newN;
        }
        return temp;
        
    }
};