#include <iostream>
#include <vector>
#include <string>
#include "Solution.h"
#include "CommonFunction.h"

using namespace std;

void testRemoveElement() {
    vector<int> testCase = { 3, 2, 2, 3 };
    int val = 3; // 要移除的元素值

    Solution solution;
    int k = solution.removElement(testCase, val);

    CommonFunction  commonfunction;
    commonfunction.printIntVector(testCase);
}

void testSingleNumber() {
    Solution solution;
    vector<int> nums6 = {2, 1, 3, 3, 2};
    cout << solution.singleNumber(nums6) << endl;
}

void testRemoveLinkedListElement() {
    Solution solution;

    // 1 → 2 → 6 → 3 → 4 → 5 → 6 → nullptr
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
    cout << "After removal, size = " << k << endl;

    CommonFunction commonfunction;
    commonfunction.printIntVector(nums);
}

void testReverseString() {
    vector<char> s1 = { 'h', 'e', 'l', 'l', 'o' };
    vector<char> s2 = { 'o', 'l', 'l', 'e', 'h' };

    Solution solution;
    solution.reverseString(s1);

    CommonFunction commonfunction;
    commonfunction.printCharVector(s2);
}

void testTwoSum() {
    vector<int> numbers = { 2, 7, 11, 5 };
    int target = 9; // 要移除的元素值

    Solution solution;
    vector<int> childs = solution.twoSum(numbers, target);
    
    CommonFunction  commonfunction;
    commonfunction.printIntVector(childs);
}


void testValidParentheses() {
    string testCase = "()[]{}";

    Solution solution;
    bool result = solution.validparentheses(testCase);

    cout << "testValidParentheses result " << result << endl;
}

void testBestTimetoBuyandSellStock() {
    vector<int> stockPrices = {7,1,5,3,6,4};

    Solution solution;
    int result = solution.bestTimetoBuyandSellStock(stockPrices);

    cout << "testBestTimetoBuyandSellStock result " << result << endl;
}

void testMajorityElement() {
    vector<int> numbers = {2,2,1,1,1,2,2};

    Solution solution;
    int major_element = solution.majorityElement(numbers);

    cout << "testMajorityElement" << major_element << endl;
}

int main() {
    /*cout << "testRemoveElement" << endl;
    testRemoveElement();*/

    /*cout << "testSingleNumber" << endl;
    testSingleNumber();*/

    /*cout << "testRemoveLinkedListElement" << endl;
    testRemoveLinkedListElement(); */

    /*cout << "testRemoveDuplicatesSortedArray" << endl;
    testRemoveDuplicatesSortedArray();*/

   /*cout << "testRevertString" << endl;
    testReverseString();*/

    /*cout << "testTwoSum" << endl;
    testTwoSum();*/

   /* cout << "testValidParentheses" << endl;
    testValidParentheses();*/

    cout << "testBestTimetoBuyandSellStock" << endl;
    testBestTimetoBuyandSellStock();
    
    system("pause");
    return 0;
}
