#include <iostream>
#include <vector>

#include "Solution.h"
#include "CommonFunction.h"

using namespace std;

/* 27. Remove Element
    ※ difficulty: easy
    ※ describtion: Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
                    The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
                    Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
                    Change the array nums such that the first k elements of nums contain the elements which are not equal to val. 
                    The remaining elements of nums are not important as well as the size of nums.
    ※ learning objective: Effectively use existing space to remove elements.
*/

void testRemoveElement() {
    Solution solution;
    
    vector<vector<int>> testCases = {
        {3, 2, 2, 3},
        {0, 1, 2, 2, 3, 0, 4, 2},
        {1, 2, 3, 4},
        {2, 2, 2, 2},
        {}
    };

    vector<int> vals = {3, 2, 5, 2, 1};

    for (int i = 0; i < testCases.size(); i++) {
        int k = solution.removElement(testCases[i], vals[i]);
        cout << "After removal, size = " << k << ", nums = [";
        for (int j = 0; j < k; ++j) {
            cout << testCases[i][j] << (j < k - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }
}

/* 136. Single number
    ※ difficulty: easy
    ※ describtion: Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
                    You must implement a solution with a linear runtime complexity and use only constant extra space.
    ※ learning objective: Using XOR to efficiently find once-only numbers, because A⊕0=A & A⊕A=0.
*/

void testSingleNumber() {
    Solution solution;
    vector<int> nums6 = {2, 1, 3, 3, 2};
    cout << solution.singleNumber(nums6) << endl;
}


/* 203. Remove Linked List Elements
    ※ difficulty: easy
    ※ describtion: Given the head of a linked list and an integer val, 
                    remove all the nodes of the linked list that has Node.val == val, and return the new head.
    ※ learning objective: Learn to delete nodes, headers & remaining elements of a linked string column in batches.
*/

void testRemoveLinkedListElement() {
    Solution solution;

    // Creating a linked list: 1 -> 2 -> 6 -> 3 -> 4 -> 5 -> 6
    ListNode* head = new ListNode(1, new ListNode(2, new ListNode(6, new ListNode(3, new ListNode(4, new ListNode(5, new ListNode(6)))))));


    cout << "Original List: "<<endl;
    CommonFunction commonfunction;
    commonfunction.printLinkedList(head);

    head = solution.removeLinkedListElement(head, 6);

    cout << "Modified List: "<<endl;
    commonfunction.printLinkedList(head);

    // Clean up the memory used by the linked list
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

/* 26. Remove Duplicates from Sorted Array
    ※ difficulty: easy
    ※ describtion: Given an integer array nums sorted in non-decreasing order, 
    remove the duplicates in-place such that each unique element appears only once. 
    The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
    ※ learning objective: 
*/

void testRemoveDuplicatesSortedArray() {
    Solution solution;
    vector<int> nums = {1, 1, 2};
    int k = solution.removeDuplicatesSortedArray(nums);
    cout << "After removal, size = " << k << ", nums = [";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << (i < k - 1 ? ", " : "");
    }
    cout << "]" << endl;
}


int main() {
    cout << "testRemoveElement" << endl;
    testRemoveElement();

    cout << "testSingleNumber" << endl;
    testSingleNumber();

    cout << "testRemoveLinkedListElement" << endl;
    testRemoveLinkedListElement();

    cout << "testRemoveDuplicatesSortedArray" << endl;
    testRemoveDuplicatesSortedArray();
    return 0;
}