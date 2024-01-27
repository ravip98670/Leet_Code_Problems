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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int> temp;
        
        for(int i=0;i<lists.size();i++){
            ListNode *trav = lists[i];
            while(trav != NULL){
                temp.push_back(trav->val);
                trav = trav->next;
            }
        }
        
        sort(temp.begin(),temp.end());
        
        ListNode *ans = new ListNode();
        ListNode *res = ans;
        for(int i=0;i<temp.size();i++){
            
            ans->next = new ListNode(temp[i]);
            ans = ans->next;
                
        }
        return res->next;
    }
};