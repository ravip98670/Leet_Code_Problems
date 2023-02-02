class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> mpp;

        

        for(int i=0; i<num.size(); i++)

            mpp[num[i]]++;

        

        for(int i=0; i<num.size(); i++){

            char c ='0' + i;

        

            if(num[i] != '0' + mpp[c]){

      

                return false;

            }

                

        }

        

        return true;
    }
};