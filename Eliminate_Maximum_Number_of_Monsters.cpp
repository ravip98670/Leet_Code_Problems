class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        
        vector<double> time;
        for(int i=0;i<dist.size();i++){
            time.push_back((double)dist[i]/(double)speed[i]);
        }
        
        sort(time.begin(),time.end());
        int t = 0, ans = 0;
        for(auto a:time){
            if(t >= a)
                return ans;
            else{
                ans++;
                t++;
            }
        }
        return ans;
    }
};