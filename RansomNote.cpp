#include "Solution.h"
bool Solution::RansomNote(string ransomNote, string magazine) {
    //  lowercase English letters
    vector<int> charCount(26, 0);

    // 計算 magazine每個字母中出現的次數
    for (char c : magazine) {
        charCount[c - 'a']++;
    }

    // 先檢查 ransomNote 中每個字母是否在 magazine 中有足夠的數量
    for (char c : ransomNote) {
        if (charCount[c - 'a'] == 0) {
            return false;
        }
        charCount[c - 'a']--;
    }

    return true;
}