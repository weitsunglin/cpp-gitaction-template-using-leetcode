#include "Solution.h"

int Solution::removeDuplicatesSortedArray(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int k = 1; // 因為第一個元素總是唯一的，所以從1開始計數
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[i - 1]) { // 如果當前元素和前一個元素不同
            nums[k] = nums[i]; // 把當前元素移動到k指向的位置
            ++k; // 移動k指針
        }
    }
    return k; // 返回唯一元素的數量
}