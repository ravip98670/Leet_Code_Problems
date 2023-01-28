class Solution {
public:
    int numSteps(string s) {
//         long long decimal_number=0,p=0;
//         long long  N=s.size(); 
//         for(int i=N-1;i>=0;i--) {
//             if(s[i]=='1') {
//                 decimal_number += pow(2,p);
//             }
//             p++; 
//         }
//         cout<<decimal_number<<" ";
//         long long count = 0;
//         while(decimal_number > 0){
        
//             if(decimal_number == 1)
//                 return count;
//             else if(decimal_number%2 == 0){
//                 decimal_number /= 2;
//                 count++;
//             }
//             else{
//                 decimal_number++;
//                 count++;
//             }
//         }
        
//         return count;
        int step = 0;
        
        while(s.size() > 1){
            if(s.back() == '0'){
                s.pop_back();
                step++;
                continue;
            }
            bool check = false;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i] == '0'){
                    s[i] = '1';
                    check = true;
                    break;
                }
                s[i] = '0';
            }
            if(!check){
                s = '1'+s;
            }
            step++;
        }
        return step;
    }
};