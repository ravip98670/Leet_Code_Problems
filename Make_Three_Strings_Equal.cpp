class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        
//         int count = 0;
//         for(int i=0;i<s1.size();i++){
//             if(s1[i] == s2[i] && s1[i] == s3[i])
//                 count++;
//             else if(count == 0)
//                 return -1;
        
//         }
        
       
                
       
        
        long n = INT_MAX;
        n = min({s1.size(), s2.size(), s3.size()});
        
        if(s1[0] != s2[0] || s2[0] != s3[0]){
            return -1;
        }
        
        long  i=0; 
        while(i<n && (s1[i] == s2[i] && s2[i] == s3[i]))
        {
            i++;
        }
        
        long  ans = 0;
        
        long  temp = s1.size() - i;
        ans += temp;
        long  tempf = s2.size() - i;
        ans += tempf;
        long  tempff = s3.size() - i;
        
        
        
        ans += tempff;
        
        return ans;

//         int ans = 0;
//         // if(count < s1.size())
//             ans += (s1.size()-count);
        
//         // if(count < s2.size())
//             ans += (s2.size()-count);
        
//         // if(count < s3.size())
//             ans += (s3.size()-count);
        
//         return ans;
    }
};