#include <iostream>
#include "test.h"

int main() {
    std::string version_string = std::version();
    std::cout << "C++ 標準庫版本：" << version_string << std::endl;
    
    /*testRemoveElement();
    testSingleNumber();
    testRemoveLinkedListElement(); 
    testRemoveDuplicatesSortedArray();
    testReverseString();
    testTwoSum();
    testValidParentheses();
    testBestTimetoBuyandSellStock();
    testlengthOfLastWord();*/
    testSearchInsert();
    
    system("pause");
    return 0;
}
