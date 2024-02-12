#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
    public:
    int removeFromArray(vector<int>& nums, int val);
    int singleNumber(vector<int>& nums);
    ListNode* removeFromList(ListNode* head, int val);
};

#endif