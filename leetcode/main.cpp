#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

void removeFromArray(Solution& solution, vector<int>& nums, int val) {
    int k = solution.removeFromArray(nums, val);
    cout << "After removal, size = " << k << ", nums = [";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << (i < k - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    
    /* 27. Remove Element
        ※ difficulty: easy
        ※ describtion: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
                        The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
                        Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
                        Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
                        The remaining elements of nums are not important as well as the size of nums.
        ※ learning objective: Effectively use existing space to remove elements.
    */

    Solution solution;
    cout << "Remove Element" << endl;
    vector<int> nums1 = { 3, 2, 2, 3 };
    vector<int> nums2 = { 0, 1, 2, 2, 3, 0, 4, 2 };
    vector<int> nums3 = { 1, 2, 3, 4 };
    vector<int> nums4 = { 2, 2, 2, 2 };
    vector<int> nums5 = {};

    removeFromArray(solution, nums1, 3);
    removeFromArray(solution, nums2, 2);
    removeFromArray(solution, nums3, 5);
    removeFromArray(solution, nums4, 2);
    removeFromArray(solution, nums5, 1);

    /* 136. Single number
    ※ difficulty: easy
    ※ describtion: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
                    You must implement a solution with a linear runtime complexity and use only constant extra space.
    ※ learning objective: Using XOR to efficiently find once-only numbers, because A⊕0=A & A⊕A=0.
    */
    cout << "Single number"<<endl;
    vector<int> nums6 = { 2, 1, 3, 3, 2 };
    cout << solution.singleNumber(nums6);

    /* 203. Remove Linked List Elements
    ※ difficulty: easy
    ※ describtion: Given the head of a linked list and an integer val, 
                    remove all the nodes of the linked list that has Node.val == val, and return the new head.
    ※ learning objective: Learn to delete nodes, headers & remaining elements of a linked string column in batches.
    */

    // 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(6, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6)))))));

    std::cout << "Original List: ";
    printList(head);

    head = solution.removeFromList(head, 6);

    std::cout << "Modified List: ";
    printList(head);

    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}