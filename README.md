# Algorithm Explanations

## 27. Remove Element

Requirement: To remove specified elements from array.

Solution: Directly find the value that is not equal to the element to be deleted, and reassign the value to the array, returning the new length of the array.


## 136. Single Number

Requirement:　Given a non-empty array of integers nums, every element appears 「twice」 except for one. Find that single one.

Solution: Use ^= (XOR) and a loop to find the number that is only once used, because A ⊕ 0=A & A ⊕ A=0

## 203. Remove Linked List Elements

Requirement: Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Solution: The first element and the second element are not processed in the same way, but both are first stored as temp, then point the head to next, and finally delete the temp.

  
## 26. Remove Duplicates from Sorted Array

Requirement: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
  The relative order of the elements should be kept the same. Then return the number of unique elements in nums.


Solution: Use k as index to find, since the first element is always unique, find from the second element, if the current element is different from the previous one, move the current element to the k position, 
  and finally return k (the length of the non-duplicated element)


## 344. Reverse String 

Requirement: Write a function that takes a string as input and returns the string reversed

Solution:　Use two indexes, one at the front and one at the back, both going to the center and exchanging with each other as they go.

##  1. Two Sum

Requirement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Solution: Use map to compare each element of the array to the target.


##  20. Valid Parentheses

Requirement: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

Solution: Push the characters into the stack, then use top to match the next character, if it matches, then pop the character and move on to the next group.


![black_seal](https://github.com/weitsunglin/leetcode/blob/main/black_seal.png)


© 2024 weitusnglin. All rights reserved.
