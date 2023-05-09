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
    int getDecimalValue(ListNode* head) {
        
        vector<int> arr;
        
        ListNode *temp = head;
        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next; 
        }
        int ans = 0;
        int j = 0;
        for(int i=arr.size()-1;i>=0;i--){
            ans += (arr[i]*pow(2,j));
            j++;
        }
        return ans;
    }
};