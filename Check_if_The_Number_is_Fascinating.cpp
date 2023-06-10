class Solution {
public:
    bool isFascinating(int n) {
        
        int t1 = n*2;
        int t2 = n*3;
    
        string str1 = to_string(t1);
        string str2 = to_string(t2);
        string str = to_string(n);
        str += str1;
        str += str2;
        cout<<str<<endl;
        map<int,int> temp;
        for(int i=0;i<str.size();i++){
            int t = str[i]-'0';
            temp[t] += 1;
            cout<<temp[t]<<endl;
        }
        
        for(auto i:temp){
            if(i.first == 0) return false;
            else if(i.second > 1) return false;
            
        }
        return true;
       
    }
};