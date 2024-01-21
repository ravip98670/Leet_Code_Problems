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
    ListNode* midList(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    } 
    
    ListNode* mergeList(ListNode* head1,ListNode* head2){
        if(head1 == NULL && head2 == NULL)
            return NULL;
        if(head1 != NULL && head2 == NULL)
            return head1;
        if(head1 == NULL && head2 != NULL)
            return head2;
        
        ListNode* sLL = NULL;
        ListNode* eLL = NULL;
        
        while(head1 != NULL && head2 != NULL){
            if(head1->val < head2->val){
                if(sLL == NULL && eLL == NULL){
                    sLL = head1;
                    eLL = head1;
                }else{
                    eLL->next = head1;
                    eLL = eLL->next;
                }
                head1 = head1->next;
            }else{
                if(sLL == NULL && eLL == NULL){
                    sLL = head2;
                    eLL = head2;
                }else{
                    eLL->next = head2;
                    eLL = eLL->next;
                }
                head2 = head2->next;
            }
        }
        if(head1 != NULL)
            eLL->next = head1;
        if(head2 != NULL)
            eLL->next = head2;
        
        return sLL;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* mid = midList(head);
        
        ListNode* head1 = head;
        ListNode* head2 = mid->next;
        mid->next = NULL;
        
        head1 = sortList(head1);
        head2 = sortList(head2);
        
        ListNode* ans = mergeList(head1,head2);
        return ans;
    }
};