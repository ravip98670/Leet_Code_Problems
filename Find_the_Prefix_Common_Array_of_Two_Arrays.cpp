class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> a(53,0);
        vector<int> b(53,0);
        vector<int> ans;
        int count = 0;
        for(int i=0;i<A.size();i++){
                a[A[i]]++;
                b[B[i]]++;
                for(int j=0;j<=i;j++){
                    if(a[A[j]] >= 1 && b[A[j]] >= 1)
                        count++;
                }
                
                ans.push_back(count);
                count=0;      
        }
        return ans;
    }
};