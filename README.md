# Algorithm Explanations

## 27. Remove Element　

Learning Objective: 學習如何有效地使用陣列來移除特定元素.

Requirement: To remove specified elements from array.

Solution: Directly find the value that is not equal to the element to be deleted, and reassign the value to the array, returning the new length of the array.

## 136. Single Number

Learning Objective: 學習bitewise operation (XOR).

Requirement:　Given a non-empty array of integers nums, every element appears 「twice」 except for one. Find that single one.

Solution: Use ^= (XOR) and a loop to find the number that is only once used, because A ⊕ 0=A & A ⊕ A=0

## 203. Remove Linked List Elements

Learning Objective: 學習鏈結串列刪除指定元素的流程.

Requirement: Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Solution: The first element and the second element are not processed in the same way, but both are first stored as temp, then point the head to next, and finally delete the temp.

  
## 26. Remove Duplicates from Sorted Array

Requirement: Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. 
  The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Solution: Use k as index to find, since the first element is always unique, find from the second element, if the current element is different from the previous one, move the current element to the k position, and finally return k (the length of the non-duplicated element)

## 344. Reverse String 

Requirement: Write a function that takes a string as input and returns the string reversed

Solution:　Use two indexes, one at the front and one at the back, both going to the center and exchanging with each other as they go.

##  1. Two Sum

Requirement: Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Solution: Use map to compare each element of the array to the target.


##  20. Valid Parentheses

Requirement: Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

Solution: Push the characters into the stack, then use top to match the next character, if it matches, then pop the character and move on to the next group.

## 121. Best Time to Buy and Sell Stock

Requirement: You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Solution: Record two values: minimum price and maximum profit. Use the loop to visit each day's price, find the lowest price first, then use the current price and the lowest price to calculate the maximum profit.


## 169. Majority Element

Requirement: Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Solution: Declaration two variables, one for the candidate and one for the candidate's counts, using a looping visit array, when visiting an element, when the number of counts of the element is 0, the visited element will be turned into a candidate, and then if the visited element is equal to the candidate, the counts of the element will be +1, and vice versa, -1.


## 58. Length of Last Word

Requirement: Given a string s consisting of words and spaces, return the length of the last word in the string.

Solution: It's simple, find it from the back, use the string with the index to find it, if the found character is not equal to the blank, count +1

## 206. Reverse Linked List

Requirement: Given the head of a singly linked list, reverse the list, and return the reversed list.

Solution: Use two pointers to invert from the beginning and return the reversed Head

## 35. search insert position

Requirement: Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

Solution: 使用二分搜尋法查找target，如果都沒找到，最後返回的是 low 索引，這個索引指向了目標值 target 應插入的位置。

## 28. Find the index of the First Occurrence in a String

Requirement: Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Solution: 獲取haystack及needle長度，並使用needle去匹配haystack字串，匹配的次數用haystack扣除needle，這樣needle匹配就不會超過haystack。

## 171. Excel sheet colume Number

Requirement: Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

Solution: 由左到右處理字串，26進制的概念，例如 "AB" 就是0X26+1 + 1X26+1 = 28。

© 2024 weitusnglin. All rights reserved.
