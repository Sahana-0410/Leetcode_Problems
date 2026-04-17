#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        for (int j = 0; j < i; j++) {
            if (nums[j] == complement) {
                int* result = malloc(2 * sizeof(int));
                result[0] = j;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}
