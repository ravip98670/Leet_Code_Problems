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
    ListNode* swapNodes(ListNode* head, int k) {
//         vector<int> tmp;
        
//         ListNode *temp = head;
//         while(temp != NULL){
//             tmp.push_back(temp->val);
//             temp = temp->next;
//         }
        
//         int rev = tmp[k-1];
//         tmp[k-1] = tmp[tmp.size()-k];
//         tmp[tmp.size()-k] = rev;
        
//         ListNode *t = head;
//         int i = 0;
//         while(t != NULL){
//             t->val = tmp[i++];
//             t = t->next;
//         }
//         return head;
        
        int fst = 0;
        ListNode *sec = head;
        ListNode *temp;
        ListNode *tmp = head;
        
        while(tmp != NULL){
            
            if(k-1 == fst){
               temp = tmp;
                break;
            }
            fst++;
            tmp = tmp->next;
        }
        
        while(tmp->next != NULL){
            sec = sec->next;
            tmp = tmp->next;
        }
        
        int value = temp->val;
        temp->val = sec->val;
        sec->val = value;
        return head;
    }
};