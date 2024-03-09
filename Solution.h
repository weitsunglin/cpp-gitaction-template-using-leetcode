#ifndef SOLUTION_H
#define SOLUTION_H
#include <vector>
#include "Define.h"

using namespace std;

class Solution {
    public:
        int removElement(vector<int>& nums, int val);
        int singleNumber(vector<int>& nums);
        ListNode* removeLinkedListElement(ListNode* head, int val);
        int removeDuplicatesSortedArray(vector<int>& nums);
        void reverseString(vector<char>& s);
        vector<int> TwoSum(vector<int>& nums, int target);
};

#endif
