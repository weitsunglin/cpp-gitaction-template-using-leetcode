#include <iostream>
#include <vector>

#include "Solution.h"
#include "CommonFunction.h"

using namespace std;


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


void testSingleNumber() {
    Solution solution;
    vector<int> nums6 = {2, 1, 3, 3, 2};
    cout << solution.singleNumber(nums6) << endl;
}


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