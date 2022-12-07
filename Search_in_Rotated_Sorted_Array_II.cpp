bool search(int* nums, int numsSize, int target){
    int i,count=0;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            count++;
            break;
        }
    }
    if(count==0)
        return false;
    else
        return true;
}