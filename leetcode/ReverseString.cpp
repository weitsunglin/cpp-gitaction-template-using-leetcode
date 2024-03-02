#include "Solution.h"

void Solution ::reverseString(vector<char>& strings) {
    int left = 0; // Pointer at the start of the array
    int right = strings.size() - 1; // Pointer at the end of the array

    while (left < right) {
        // Swap the elements at the left and right pointers
        char temp = strings[left];
        strings[left] = strings[right];
        strings[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}