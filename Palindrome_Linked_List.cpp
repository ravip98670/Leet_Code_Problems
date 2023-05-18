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
    ListNode *temp = NULL;
    bool helper(ListNode *head){
        if(head == NULL)
            return true;
        int ans = helper(head->next);
        if(head->val != temp->val)
            return false;
        temp = temp->next;
        return ans && true;
    }
    bool isPalindrome(ListNode* head) {
        temp = head;
        return helper(head);
    }
};