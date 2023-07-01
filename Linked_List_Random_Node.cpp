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
    ListNode *headNode;
    int len = 0;
    Solution(ListNode* head) {
        headNode = head;
        ListNode *temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
    }
    
    int getRandom() {
        int ind = rand()%len;
        ListNode *temp = headNode;
        int i = 0;
        while(i < ind){
            i++;
            temp = temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */