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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode *temp = head;
        
        while(temp != NULL && temp->next != NULL){
            int data = __gcd(temp->val, temp->next->val);
            ListNode* dummy = new ListNode(data);
            dummy->next = temp->next;
            temp->next = dummy;
            temp = temp->next->next;
        }
        return head;
    }
};