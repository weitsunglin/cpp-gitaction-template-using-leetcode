#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

void removeElement(Solution& solution, vector<int>& nums, int val) {
    int k = solution.removeElement(nums, val);
    cout << "After removal, size = " << k << ", nums = [";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << (i < k - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    
    /* 27. Remove Element
        ※ difficulty: easy
        ※ describtion: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
        The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
        Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
        Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
        The remaining elements of nums are not important as well as the size of nums.
        Return k.
        ※ learning objective: Effectively use existing space to remove elements
    */

    Solution solution;
    cout << "Remove Element" << endl;
    vector<int> nums1 = { 3, 2, 2, 3 };
    vector<int> nums2 = { 0, 1, 2, 2, 3, 0, 4, 2 };
    vector<int> nums3 = { 1, 2, 3, 4 };
    vector<int> nums4 = { 2, 2, 2, 2 };
    vector<int> nums5 = {};

    removeElement(solution, nums1, 3);
    removeElement(solution, nums2, 2);
    removeElement(solution, nums3, 5);
    removeElement(solution, nums4, 2);
    removeElement(solution, nums5, 1);

    /* 136. Single number
    ※ difficulty: easy
    ※ describtion: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
                    You must implement a solution with a linear runtime complexity and use only constant extra space.
    ※ learning objective: Using XOR to efficiently find once-only numbers.
    */
    cout << "Single number"<<endl;
    vector<int> nums6 = { 2, 1, 3, 3, 2 };
    cout << solution.singleNumber(nums6);
}