#include "Solution.h"

int Solution::ExcelSheetColumeNumber(string columnTitle) {
    int result = 0;
    int n = columnTitle.length();
    
    // Process each character from left to right
    for (int i = 0; i < n; ++i) {
        int value = columnTitle[i] - 'A' + 1;
        result = result * 26 + value;
    }
    
    return result;
}
