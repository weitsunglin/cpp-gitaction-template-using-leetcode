#ifndef COMMON_FUNCTION_H
#define COMMON_FUNCTION_H

#include "Define.h"
#include <vector>

class CommonFunction {
public:
    void printLinkedList(ListNode* head);
    void printCharVector(std::vector<char>& v);
    void printIntVector(std::vector<int>& v);
};

#endif