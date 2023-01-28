class Solution {
public:
    int totalMoney(int n) {
        int curr = 1;
        int total = 0;
        for(int i = 0; i < n; i++)
        {
            total += curr+(i%7);
            
			
            if((i+1)%7 == 0)
                curr++;

        }
        return total;
    }
};