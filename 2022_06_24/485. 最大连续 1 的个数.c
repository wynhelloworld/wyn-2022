int findMaxConsecutiveOnes(int* nums, int numsSize){
    int max = 0;
    int count = 0;
    for(int i = 0; i < numsSize; i++){
        if(1 == nums[i]){
            count++;
            if(max < count){
                max = count;
            }
        }
        else{
            count = 0;
        }
    }
    return max;
}
