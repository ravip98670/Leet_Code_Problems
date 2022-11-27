class Solution {
public:
    int romanToInt(string s) {
       map<char,int> Roman;
       Roman.insert(pair('I',1)); 
       Roman.insert(pair('V',5)); 
       Roman.insert(pair('X',10)); 
       Roman.insert(pair('L',50)); 
       Roman.insert(pair('C',100)); 
       Roman.insert(pair('D',500)); 
       Roman.insert(pair('M',1000));

       int temp=Roman[s.back()];
       for(int i=s.size()-2;i>=0;i--){
           if(Roman[s[i+1]]>Roman[s[i]])
            temp=temp-Roman[s[i]];
           else
             temp=temp+Roman[s[i]];
       }
       return temp;
    }
};