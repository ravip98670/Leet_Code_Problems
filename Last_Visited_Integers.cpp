class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
         vector<int> lst;
         vector<int> ans;
//         bool isCon = true;
        int cnt = 0;
        
  
        
//         for(int i=0;i<words.size();i++){
//             // if(words[i] == "prev"){
//             //     if(lst.size() != 0){
//             //     ans.push_back(lst[lst.size()-1]);
//             //     lst.pop_back();
//             //     }else ans.push_back(-1);
//             // }else{
//             //     lst.push_back(stoi(words[i]));
//             // }
//             // if(i > 1 && words[i-1] != words[i]){
//             //     true
//             // }
        for(int i=0;i<words.size();i++){
            if(words[i] != "prev"){
                
                lst.push_back(stoi(words[i]));
                // cnt++;
                cnt = lst.size()-1;
                
            }
            else{
                if(lst.empty() || cnt < 0){
                    ans.push_back(-1);
                }
                
                else{ 
                    ans.push_back(lst[cnt]);
                     
                    cnt--;
                    
                }
            }
        }
        return ans;
//             if(words[i] != "prev"){
//                 lst.push_back(stoi(words[i]));
//                 cnt++;
//             }else {
//                 if()
//             }
            
//         }
//         for(int i=0;i<words.size();i++){
//             if(words[i] == 'prev')
//         }
//     

   
    }
};