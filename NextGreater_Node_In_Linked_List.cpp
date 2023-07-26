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
    vector<int> nextLargerNodes(ListNode* head) {
//         vector<int> ans;
//         stack<int> st;
//         ListNode * temp = head;
//         while(temp != NULL){
//             st.push(temp->val);
//             temp = temp->next;
//         }
//         int prev = st.top();
//         st.pop();
//         ans.push_back(0);
//         while(!st.empty()){
//             if(prev > st.top()) ans.push_back(prev);
           
//             else{
//                 ans.push_back(st.top());
//                 prev = st.top();
//             }
//             st.pop();
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
        
        vector<int> result;
    stack<pair<int, int>> st; 
    ListNode* current = head;
    int index = 0;

    while (current != NULL) {
        while (!st.empty() && current->val > st.top().first) {
            result[st.top().second] = current->val;
            st.pop();
        }

        st.push(make_pair(current->val, index));
        result.push_back(0);
        current = current->next;
        index++;
    }

    return result;


    }
};