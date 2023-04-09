class Solution {
public:
    void seive_algo(vector<bool> &v, int n){
        v[0] = v[1] = false;
        for(int i=2; i*i<n; i++){
            for(int j=2*i; j<n; j+=i){
                v[j] = false;
            }
        }
    }

    bool primeSubOperation(vector<int>& nums) {
        int n = nums.size();
        vector<bool> isPrime(1000, true);
        seive_algo(isPrime, 1000);

        vector<int> prime;
        for(int i=0; i<=1000; i++)
            if(isPrime[i]) 
                prime.push_back(i);
        
        int flg = 0;
        int prev = nums[n-1];
        
        for(int i=n-2; i>=0; i--){
            if(nums[i] < prev){
                prev = nums[i];
                continue;
            }
            flg = 1;
            for(int j=0; j<prime.size() && prime[j] < nums[i]; j++){
                if(nums[i]-prime[j] < prev){
                    prev = nums[i]-prime[j];
                    flg = 0;
                    break;
                }
            }
            if(flg)
                break;

        }
        return !flg;
    }
};