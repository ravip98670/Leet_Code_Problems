class Solution {
public:
    int minimumSum(int n, int k) {
        
//         vector<int> temp(n,0);
//         temp[0] = 1;
//         int sum = 1;
        
//         int lst = temp[0];
//         for(int i=1;i<n;i++){
//             //cout<<i <<": ";
//             bool flag = true;
//             lst = temp[i-1];
//             for(int j=0;j<i;j++){
//                 if(temp[j]+lst+1 == k){
//                     flag = false;
//                 }
//             }
            
//             if(flag){
//                 temp[i] = lst+1;
//                 sum += temp[i];
//                cout<<temp[i]<<" ";
//             }else {
//                 temp[i] = lst+2;
//                 sum += temp[i];
//                 cout<<temp[i]<<" ";
//             }
            
//         }
//         return sum;
        
        set<int> temp;
        int val = 1;
        int sum = 0;
        
        for(int i=0;i<n;i++){
            if(temp.find(k-val) != temp.end()){
                val++;
                i--;
               
            }else{
                 sum += val;
                temp.insert(val);
                val++;
            }
        }
        
        return sum;
    }
};