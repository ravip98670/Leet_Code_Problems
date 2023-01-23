class Solution {
public:
    int maxArea(vector<int>& height) {
        long area = 0;
        
        int left = 0;
        int right = height.size()-1;
        long temp=0;
        
        while(left < right){
            
            if(height[left] >= height[right]){
                temp = height[right]*(right-left);
                right--;
            }
            else if(height[left] <= height[right]){
                temp = height[left]*(right-left);
                left++;
            }
            
            if(area < temp)
                    area = temp;
        }
        return area;
    }
};