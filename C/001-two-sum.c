//
//  001-two-sum.c
//  leetcode
//
//  Created by BurnburnYang on 2018/9/6.
//  Copyright © 2018年 BurnburnYang. All rights reserved.
//

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int* res = (int*)malloc(sizeof(int)*2);
    for(int i=0; i<numsSize-1; i++) {
        for(int j=i+1; j<numsSize; j++) {
            if(nums[i]+nums[j] == target) {
                *res = i;
                *(res+1) = j;
                break;
            }
        }
    }
    return res;
}