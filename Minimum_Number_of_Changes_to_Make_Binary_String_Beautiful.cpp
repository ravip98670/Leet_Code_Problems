class Solution {
public:
    int minChanges(string s) {
        
//         int one = 0;
//         int zero = 0;
        int cnt = 0;
        for(int i=0;i<s.size()-1;i+=2){
//             if(s[i] == '1') one++;
//             else zero++;
        if(s[i] != s[i+1])
            cnt++;
       }
        
//         if(one == 0 && zero%2 == 0)
//             return 0;
        
//         if(one%2 == 0 && zero == 0)
//             return 0;
        
//         if(one == zero)
//             return one;
        
//         else return min(one,zero);
        
        
        
        return cnt;
    }
};