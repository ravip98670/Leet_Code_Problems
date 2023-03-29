class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        
        set<int> s1(nums1.begin(),nums1.end());
        set<int> s2(nums2.begin(),nums2.end());
        set<int> s3(nums3.begin(),nums3.end());
        
        map<int,int> hold;
        for(int i : s1)
            hold[i]++;
        for(int i : s2)
            hold[i]++;
        for(int i : s3)
            hold[i]++;
        
        vector<int> ans;
        for(auto i : hold){
            if(i.second >= 2)
                ans.push_back(i.first);
        }
        return ans;
    }
};