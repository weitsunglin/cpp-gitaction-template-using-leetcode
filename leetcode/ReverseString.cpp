#include "Solution.h"

void Solution ::reverseString(vector<char>& s) {
    int left = 0; // Pointer at the start of the array
    int right = s.size() - 1; // Pointer at the end of the array

    while (left < right) {
        // Swap the elements at the left and right pointers
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}