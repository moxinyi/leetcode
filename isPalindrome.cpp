#include <bits/stdc++.h>
using namespace std;

// reverse the newStr;
// O(n)
// O(n)
// class Solution {
// public:
//   bool isPalindrome(string& s) {
//     string newStr = "";
//     for (char c : s) {
//       if (isalnum(c)) {
//         newStr += tolower(c);
//       }
//     }
//     return newStr == string(newStr.rbegin(), newStr.rend());
//   }
// };


// Two pointer
// Time complexity O(n)
// Space complexity O(1)
class Solution {
public:
  bool isPalindrome(string& s){
    int l = 0, r = int(s.size()) - 1;

    while (l < r) {
      // cout << l << " " << r << endl;
      while (l < r && !isalnum(s[l])) l++;
      while (l < r && !isalnum(s[r])) r--;
      if (tolower(s[l]) != tolower(s[r])) return false;
      l++;
      r--;
    }
    return true;
  }

  // bool numAlpha(char c) {
  //   return ((c >= '0' && c <= '9') ||
  //           (c >= 'a' && c <= 'z') ||
  //           (c >= 'A' && c <= 'Z'));
  // }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  Solution solution;

  // string s = " ";
  // string s = "race a car";
  string s = "A man, a plan, a canal: Panama";

  cout << solution.isPalindrome(s) << '\n';
}
