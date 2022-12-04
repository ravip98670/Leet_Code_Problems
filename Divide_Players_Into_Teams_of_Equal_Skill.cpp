class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int sum=skill[0]+skill[skill.size()-1];
        
        long long ans=0;
        int begin=0;
        int last=skill.size()-1;
        while(begin<last){
            int sum1=skill[begin]+skill[last];
            if(sum1==sum){
                ans=ans+skill[begin]*skill[last];
            }else{
                return -1;
            }
            begin++;
            last--;
        }
        return ans;
    }
};