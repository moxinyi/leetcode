#include <bits/stdc++.h>
using namespace std;

// vector<int> to store each freq of char c
// O(n+m)
// O(1)
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
      return false;
    }
    vector<int> cnt(26, 0);

    for (int i = 0; i < s.size(); i++) {
      cnt[s[i] - 'a']++;
      cnt[t[i] - 'a']--;
    }
    for (int v : cnt) {
      if (v != 0) {
      return false;
      }
    }
    return true;
  }
};

  //   vector<int> s_cnt(26, 0), t_cnt(26, 0);
  //   for (char c : s) {
  //     s_cnt[c - 'a']++;
  //   }
  //
  //   for (char c : t) {
  //     t_cnt[c - 'a']++;
  //   }
  //
  //   return (s_cnt == t_cnt);
  // }


// Hashmap
// O(n+m)
// O(1) since we have at most 26 different characters.
// class Solution {
// public:
//   bool isAnagram(string s, string t) {
//     if (s.size() != t.size()) {
//       return false;
//     }
//
//     unordered_map<char, int> freq_s, freq_t;
//     for (int i = 0; i < s.size(); i++) {
//       freq_s[s[i]]++;
//       freq_t[t[i]]++;
//     }
    // for (char c : s) {
    //   freq_s[c]++;
    // }
    //
    // for (char c : t) {
    //   freq_t[c]++;
    // }

    // return (freq_s == freq_t);
//   }
// };

// sort and check
// O(nlogn + mlogm)
// O(1)

// class Solution {
// public:
//   bool isAnagram(string s, string t) {
//     if (s.size() != t.size()) {
//       return false;
//     }
//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());
//
//     // for (int i = 0; i < s.size(); i++) {
//     //   if (s[i] != t[i]) {
//     //     return false;
//     //   }
//     // }
//     // return true;
//     return s == t;
//   }
// };

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Solution solution;
  // string s = "anagram", t = "nagaram";
  string s = "cat", t = "nat";

  cout << (solution.isAnagram(s, t) ? "true" : "false") << endl;
}
