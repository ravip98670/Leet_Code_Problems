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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode *str1 = NULL;
        ListNode *end1 = NULL;
        ListNode *end2 = list2;
        ListNode *temp = list1;
        int count = 0;
        while(temp->next != NULL){
           count++;
            if(count == a){
                str1 = temp;
            }
            if(count-1 == b){
                end1 = temp->next;
            }
             
            temp = temp->next;
        }
        
        while(end2->next != NULL){
            end2 = end2->next;
        }
        
        str1->next = list2;
        end2->next = end1;
        return list1;
        
    }
};