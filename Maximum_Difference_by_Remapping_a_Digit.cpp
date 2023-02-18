class Solution {
public:
    int minMaxDifference(int num) {
        
        string nums = to_string(num);
        char temp;
        
        //cout<<"1."<<nums<<endl;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] != '9'){
                temp = nums[i];
                cout<<"temp="<<temp<<endl;
                break;
            }
           
            
        }
        string maxs = nums;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == temp)
                maxs[i] = '9';
            
        }
        cout<<"2."<<maxs<<endl;
        
        string mins = nums;
        for(int i=0;i<nums.size();i++){
           if( nums[i] != '0')
               temp=mins[i];
            break;
           
        }
          for(int i=0;i<mins.size();i++){
            if(mins[i] == temp)
                mins[i] = '0';
            
        }
        cout<<"3."<<mins<<endl;
        
        int n1 = stoi(maxs);
        int n2 = stoi(mins);
        
        return (n1-n2);
        
       //sort(hold.begin(),hold.end());
        // for(auto i:hold){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // return 0;
        
    }
};