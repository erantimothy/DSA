#include <string>

using namespace std;

class Solution {
public:
  /* If the value of s is equal to value in t then move to next index in 's' or
   * else keep moving the index in 't' to iterate it, if s is a substring then
   * sp would equal the length of s or tp would equal t.length() before that.*/
  bool isSubsequence(string s, string t) {
    int sp = 0;
    int tp = 0;

    while (sp < s.length() && tp < t.length()) {
      if (s[sp] == t[tp]) {
        sp++;
      }
      tp++;
    }
    return sp == s.length();
  }
};
