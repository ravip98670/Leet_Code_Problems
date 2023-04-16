class Solution {
public:
    int addMinimum(string word) {
        
        int i = 0;
        int ans = 0;
       
        
        while(i < word.size()){
            
            int count = 0;
            if(word[i] == 'a'){
                count++;
                i++;
            }
            if(i < word.size() && word[i] == 'b'){
                count++;
                i++;
            }
            if(i < word.size() && word[i] == 'c'){
                count++;
                i++;
            }
            
            cout<<count<<endl;
            ans += (3-count);
        }
        return ans;
        
    }
};