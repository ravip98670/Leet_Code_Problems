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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector<vector<int>> vec( m , vector<int> (n, -1));
        
        ListNode* temp = head;
        int srow = 0, erow = m-1;
        int scol = 0, ecol = n-1;
        
        int count = 0;
        
        while(count <= (m*n) || (temp != NULL)){
            for(int i=scol;i<=ecol && (temp != NULL);i++){
                vec[srow][i] = temp->val;
                temp = temp->next;
                count++;
            }
            srow++;
            if(count >= (m*n) || (temp == NULL)) break;
            
            for(int i=srow;i<=erow && (temp != NULL);i++){
                vec[i][ecol] = temp->val;
                temp = temp->next;
                count++;
            }
            ecol--;
            if(count >= (m*n) || (temp == NULL)) break;
            for(int i=ecol;i>=scol && (temp != NULL);i--){
                vec[erow][i] = temp->val;
                temp = temp->next;
                count++;
            }
            erow--;
            if(count >= (m*n) || (temp == NULL)) break;
            for(int i=erow;i>=srow && (temp != NULL);i--){
                vec[i][scol] = temp->val;
                temp = temp->next;
                count++;
            }
            scol++;
            if(count >= (m*n) || (temp == NULL)) break;
        }
        return vec;
    }
};