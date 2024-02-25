# Algorithm Explanations

## 27. Remove Element

## 136. Single Number

## 203. Remove Linked List Elements

## 26. Remove Duplicates from Sorted Array

To remove duplicates from a sorted array and return the new length of the array without duplicates, we use the following approach:

- **Initialize `k`**: Set `k` to 1. The first element is always unique, so `k` initially points to the second element's position, assuming the first element is at position 0.

- **Iterate Through the Array**: Start from the second element (index 1), as the first element is considered unique by default.

- **Compare Adjacent Elements**:
  - For each element at index `i`, compare it with the element at index `i-1`.
  - If they are not the same, it means we have found a unique element.

- **Place Unique Element**:
  - Place the unique element found at the current index `i` into the position `k` of the array.
  - Increment `k`, pointing it to the next position for a potentially unique element.

- **Repeat**: Continue this process for each element in the array. Given the array is sorted, this method ensures all duplicates are skipped, and only unique elements are retained.

- **Return `k`**: The value of `k` after the last unique element has been placed will be the length of the array containing only unique elements. This value is returned as the result.

This method modifies the array in place to contain only unique elements and returns the length of this modified array, utilizing only a single array for the operation.
