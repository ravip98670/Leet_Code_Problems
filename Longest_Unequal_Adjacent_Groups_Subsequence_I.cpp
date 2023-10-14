class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        // vector<string> res;
        // set<string> ans;
        vector<string> ans;
        ans.push_back(words[0]);
        // for(int i=0;i<words.size()-1;i++){
        //     for(int j=i+1;j<words.size();j++){
        //     if(groups[i] != groups[j]){
        //         ans.insert(words[i+1]);
        //     }
        //     }
        // }
        
        for(int i=1;i<n;i++){
            if(groups[i] != groups[i-1])
                ans.push_back(words[i]);
        }
        return ans;
        // for(auto s:ans){
        //     // string t = ans[i];
        //     res.push_back(s);
        // }
        // return res;
        
    }
};