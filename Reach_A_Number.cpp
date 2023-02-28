class Solution {
public:
    int reachNumber(int target) {
        int sum = 0;
        int steps = 0;
        
        target = abs(target);
        
        while(sum < target){
            steps++;
            sum += steps;
        }
        
        if((sum - target) % 2 == 0){
            return steps;
        }
        else if(steps % 2 == 0){
            return steps + 1;
        }
        else
            return steps + 2;
    }
};