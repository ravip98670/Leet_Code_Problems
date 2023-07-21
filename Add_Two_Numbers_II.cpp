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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        stack<int> s1;
        stack<int> s2;
        
        ListNode *t1 = l1;
        ListNode *t2 = l2;
        while(t1 != NULL){
            s1.push(t1->val);
            t1 = t1->next;
        }
        while(t2 != NULL){
            s2.push(t2->val);
            t2 = t2->next;
        }
        ListNode* result = new ListNode();
        ListNode* temp = result;
        int carry = 0;
        while(!s1.empty() || !s2.empty() || carry){
            int currS = 0;
            if(!s1.empty()){
                currS += s1.top();
                s1.pop();
            }
            if(!s2.empty()){
                currS += s2.top();
                s2.pop();
            }
            currS += carry;
            carry = currS/10;
            ListNode* newnode = new ListNode(currS%10);
            newnode->next = result->next;
            result->next = newnode;
           
        }
        return result->next;
    }
};