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
    ListNode* removeNodes(ListNode* head) {
        
        stack<int> s1;
        ListNode *result = new ListNode(0);
        ListNode *t1 = head;
        while(t1 != NULL){
            s1.push(t1->val);
            t1 = t1->next;
        }
        int curr = s1.top();
        ListNode *temp = new ListNode(curr);
        temp->next = result->next;
        result->next = temp;
        cout<<s1.top()<<endl;
        s1.pop();
        while(!s1.empty()){
            if(curr <= s1.top()){
                ListNode *temp = new ListNode(s1.top());
                temp->next = result->next;
                result->next = temp;
                curr = s1.top();
            }
            //if(curr < s1.top()) curr = s1.top();
            cout<<s1.top()<<endl;
            s1.pop();
        }
        return result->next;
    }
};