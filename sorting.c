#import "sorting.h"

//Implementing "counting sort" procedure

void sort(int *nums, int size){
  
    int *sortedNums = (int*)malloc(size*sizeof(int));
    // Create a count array to store count of individual characters and initialize count array as 0
    //Let range be 10
    int count[RANGE + 1], i;
    //initialising to 0
    memset(count, 0, sizeof(count));
 
    // Store count of each integer of nums
    for (i = 0; nums[i]; i++)
        count[nums[i]]++;
 
    // Change count[i] so that count[i] now contains actual position of this character in output array
    for (i = 1; i <= RANGE; ++i)
        count[i] += count[i - 1];
 
    // Using the count array fill the sortedNums array
    for (i = 0; nums[i]; ++i) {
        sortedNums[count[nums[i]] - 1] = nums[i];
        count[nums[i]]--;
    }
 
    // Now tranfer back the elements of sortedNums to nums
    for (i = 0; nums[i]; ++i)
        nums[i] = sortedNums[i];
}
