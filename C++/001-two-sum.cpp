//
//  001-two-sum.cpp
//  leetcode
//
//  Created by BurnburnYang on 2018/9/6.
//  Copyright © 2018年 BurnburnYang. All rights reserved.
//

/* key point:
*  map.key = nums[i], map.value = i
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i=0; i<nums.size(); i++) {
            if(m.count(target - nums[i]))
                return {i, m[target-nums[i]]}; 
            else
                m[nums[i]] = i;
        }
        return {};
    }
};