#include "Solution.h"
#include <unordered_map>
 vector<int> Solution::twoSum(vector<int>& nums, int target) {
   unordered_map<int, int> numMap;
   for (int i = 0; i < nums.size(); i++) {
       int complement = target - nums[i];
       if (numMap.find(complement) != numMap.end()) {
           return {numMap[complement], i};
       }
       numMap[nums[i]] = i;
   }
   return {};
}
