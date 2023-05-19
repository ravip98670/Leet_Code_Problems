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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL || head->next == NULL)
            return NULL;
        ListNode *temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        int pos = size - n;
        temp = head;
        if(pos == 0){
            head = temp->next;
            return head;
        }
        else{
            while(pos-1 != 0){
                pos--;
                temp = temp->next;
            }
            temp->next = temp->next->next;
            return head;
        }
        return head;
    }
};