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
    int pairSum(ListNode* head) {
        
        vector<int> tmp;
        ListNode *temp = head;
        int maxData = 0;
        
        while(temp != NULL){
            tmp.push_back(temp->val);
            temp = temp->next;
            
        }
        
        int i=0,j=tmp.size()-1;
        while(i < j){
            maxData = max(maxData,tmp[i]+tmp[j]);
            i++;j--;
        }
        return maxData;
    }
};