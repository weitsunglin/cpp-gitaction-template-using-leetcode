#include "Solution.h"
using namespace std;
int Solution::Find_the_index_of_the_First_Occurrence_in_a_String(std::string haystack, std::string needle) {
      int haystackLen = haystack.size();
      int needleLen = needle.size();

      if (needleLen == 0) {
          return 0;
      }

      for (int i = 0; i <= haystackLen - needleLen; ++i) {
          if (haystack.substr(i, needleLen) == needle) {
              return i; // Found the needle, return the start index
          }
      }

      return -1;
}
