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
    ListNode* reverseKGroup(ListNode* head, int k) {
            if(k == 0 || k == 1)
                return head;
            
            int check = 0;
            ListNode *temp = head;
            while(temp != NULL){
                check++;
                temp = temp->next;
            }
            if(check < k) return head;
            ListNode *prev = NULL;
            ListNode *curr = head;
            ListNode *next = NULL;
            int count = 0;
            while(curr != NULL && count < k ){
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            if(next != NULL)
                head->next = reverseKGroup(next,k);
            return prev;
        }
};