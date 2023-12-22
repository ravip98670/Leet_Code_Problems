class Solution {
public:
    int maxScore(string s) {
        
        int n = s.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        
        // int t = 0;
        // if(s[0] == '0'){
        //     left[0] = 1;
        //     t = 1;
        // }
        // int j = 0;
        // if(s[n-1] == '1'){
        //     right[n-1] = 1;
        //     j++;
        // }
        
        
//         for(int i=0;i<n-1;i++){
//             if(s[i] == '0')
//                 t++;
//             left[i] = t;         
//         }
        
//         for(int i=n-1;i>0;i--){
//              if(s[i] == '1')
//                  j++;
//             right[i] = j;
            
//         }
        
//         int ans = INT_MIN;
//         for(int i=0;i<n;i++){
//             ans = max(ans,left[i]+right[i]);
//         }
//         return ans;
        int z = 0;
        int ans = 0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i] == '0')
                z++;
            int one = 0;
            for(int j=i+1;j<s.size();j++){
                if(s[j] == '1')
                    one++;
            }
            
            ans = max(ans,z+one);
        }
        return ans;
    }
};