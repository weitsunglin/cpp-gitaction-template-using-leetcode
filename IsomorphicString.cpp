#include "Solution.h"

bool Solution ::isIsomorphic(string s, string t) {
    if (s.size() != t.size()) return false;

    unordered_map<char, char> s_to_t, t_to_s;

    for (int i = 0; i < s.size(); ++i) {
        char s_char = s[i];
        char t_char = t[i];

        if (s_to_t.count(s_char) && s_to_t[s_char] != t_char) {
            return false;
        }
        if (t_to_s.count(t_char) && t_to_s[t_char] != s_char) {
            return false;
        }

        s_to_t[s_char] = t_char;
        t_to_s[t_char] = s_char;
    }

    return true;
}