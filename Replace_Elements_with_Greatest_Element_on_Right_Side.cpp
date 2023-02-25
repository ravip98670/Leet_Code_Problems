class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>res(arr.size(),0);
        
        int maxa = arr[arr.size()-1];
        
        res[res.size()-1]=-1;
        for(int i=res.size()-2;i>=0;i--){
            res[i] = maxa;
            maxa = max(maxa,arr[i]);
        }
        return res;

    }
};