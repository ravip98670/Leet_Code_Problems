class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int count = 1;
        while(i < arr.size()){
            if(arr[i] != count){
                k--;
                if(k == 0)
                    return count;
                
                count++;
                continue;
            }
            i++;count++;
        }
        if(k != 0){
            return count+k-1;
        }
        return -1;
    }
};