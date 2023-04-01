class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        
        int mimi1 = *min_element(nums1.begin(),nums1.end());
        int mimi2 = *min_element(nums2.begin(),nums2.end());
        
        map<int,int> hold;
        for(int n:nums1)
            hold[n]++;
        for(int n:nums2)
            hold[n]++;
        
        for(auto i:hold){
            if(i.second == 2)
                return i.first;
        }
        
        
        return (mimi1<mimi2)?mimi1*10+mimi2:mimi2*10+mimi1;

    }
};