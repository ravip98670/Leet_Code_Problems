class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
//         long long sum = 1;
//         vector<int> temp(n,0);
//         int k = 2;
//         int t = 1;
//         temp[0] = 1;
//         for(int i=1;i<n;i++){
//             if(temp[i-1] + k == target){
//                 temp[i] = k+1;
//                 k = temp[i]+1;
//                 sum += temp[i];
//             }
//             else {
//                 temp[i] = k++;;
//                  sum += temp[i];
              
//             }
                
//         }
//         return sum;
        
        set<int> s;
        long long sum = 0;
        for(int i=1;s.size()<n;i++){
            
            if (!s.contains(target-i)){
                s.insert(i);
                sum += i;
            }
        }
        return sum;
        
    }
};