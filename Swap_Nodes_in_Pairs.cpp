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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode *temp = head;
        
        if(temp == NULL || temp->next == NULL)
            return head;
        
        while(temp != NULL){
            if(temp->next == NULL)
                return head;
            int data = temp->val;
            temp->val = temp->next->val;
            temp->next->val = data;
            
            temp = temp->next->next;
            
        }
        return head;
    }
};