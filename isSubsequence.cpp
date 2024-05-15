#include "Solution.h"

bool Solution::isSubsequence(string subsequence, string text) {
    int m = subsequence.size(), n = text.size();
    int j = 0;  // Pointer for subsequence
    
    // Traverse text
    for (int i = 0; i < n && j < m; ++i) {
        if (subsequence[j] == text[i]) {
            ++j;  // Move pointer in subsequence
        }
    }
    
    // If j reached the end of subsequence, then subsequence is a subsequence of text
    return j == m;
}