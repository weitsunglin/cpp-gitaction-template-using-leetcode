#include "Solution.h"

ListNode* Solution::reverseList(ListNode* head) {
    ListNode* prev = nullptr; 
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextTemp = current->next; 
        current->next = prev;
        prev = current;
        current = nextTemp;
    }
    return prev;
}
