#include <iostream>
#include "Solution.h"

ListNode* Solution::removeFromList(ListNode* head, int val) {

    //檢查頭元素是否等於val
    while (head != nullptr && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    //檢查頭元素後的元素是否等於val
    ListNode* current = head;
    while (current != nullptr && current->next != nullptr) {
        if (current->next->val == val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else {
            current = current->next;
        }
    }

    return head;
}