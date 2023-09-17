/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL)
            return ans;
    
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        
        vector<int> temp;
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            
            if(front == NULL){
                ans.push_back(temp);
                while(temp.size()) temp.pop_back();
                if(!q.empty()){
                    q.push(NULL);
                }
            }else{
                temp.push_back(front->val);
                for(int i=0;i<front->children.size();i++){
                    q.push(front->children[i]);
                }
            
            }
        }
        return ans;
    }
};