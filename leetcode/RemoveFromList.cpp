#include <iostream>
#include "Solution.h"

ListNode* Solution::removeFromList(ListNode* head, int val) {

    while (head != nullptr && head->val == val) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

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