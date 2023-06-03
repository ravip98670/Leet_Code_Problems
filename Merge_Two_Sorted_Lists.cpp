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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL && list2 == NULL)
		    return NULL;
	
	    if(list1 != NULL && list2 == NULL)
		    return list1;
	    if(list1 == NULL && list2 != NULL)
		    return list2;
        ListNode *strL = NULL;
        ListNode *endL = NULL;
        
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                if(strL == NULL && endL == NULL){
                    strL = list1;
                    endL = list1;
                }else{
                    endL->next = list1;
                    endL = endL->next;
                }
                list1 = list1->next;
            }
            else{
                if(strL == NULL && endL == NULL){
                    strL = list2;
                    endL = list2;
                } else {
                    endL->next = list2;
                    endL = endL->next;
                }
                list2 = list2->next;
            }
        }
        if(list1 != NULL)
            endL->next = list1;
        if(list2 != NULL)
            endL->next = list2;
        
        return strL;
    }
};