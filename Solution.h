#ifndef SOLUTION_H
#define SOLUTION_H
#include "library.h"
using namespace std;

class Solution {
    public:
        int removElement(vector<int>& nums, int val);
        int singleNumber(vector<int>& nums);
        ListNode* removeLinkedListElement(ListNode* head, int val);
        int removeDuplicatesSortedArray(vector<int>& nums);
        void reverseString(vector<char>& s);
        vector<int> twoSum(vector<int>& nums, int target);
        bool validparentheses(string s);
        int bestTimetoBuyandSellStock(vector<int>& prices);
        int majorityElement(vector<int>& nums);
        int lengthOfLastWord(string s);
        ListNode* reverseLinkedList(ListNode* head);
        int searchInsertposition(vector<int>& nums, int target);
        int ExcelSheetColumeNumber(string columnTitle);
        bool isSubsequence(string subsequence, string text);
};

#endif