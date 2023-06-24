class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int pair = 0;
        for(int i=0;i<words.size();i++){
            string str = words[i];
            for(int j=i+1;j<words.size();j++){
                string str1 = words[j];
                reverse(str1.begin(),str1.end());
                if(str == str1) pair++;
            }
        }
        return pair;
    }
};