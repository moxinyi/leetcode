#include <bits/stdc++.h>
using namespace std;


// sort each string and store it as key in a map;
// O(m * nlogn)
// O(m * n), where m is the number of strings and n is the length of the longest string.
// class Solution {
// public:
//   vector<vector<string>> groupAnagrams(vector<string>& strs) {
//     unordered_map<string, vector<string>> res;
//     for (const auto& s : strs) {
//       string sortedS = s;
//       sort(sortedS.begin(), sortedS.end());
//       res[sortedS].push_back(s);
//     }
//
//     vector<vector<string>> result;
//     for (auto& pair : res) {
//       result.push_back(pair.second);
//     }
//
//     return result;
//   }
// };


// Using vector<int> as key so we can avoid sorting.
// O(m * n)
// O(m)
// class Solution {
// public:
//   vector<vector<string>> groupAnagrams(vector<string>& strs) {
//     unordered_map<string, vector<string>> res;
//     for (const auto& s : strs) {
//       vector<int> key(26, 0);
//       for (char c : s) {
//         key[c - 'a']++;
//       }
//       string k = to_string(key[0]);
//       for (int i = 1; i < 26; i++) {
//         k += ',' + to_string(key[i]);
//       }
//       res[k].push_back(s);
//     }
//
//     vector<vector<string>> result;
//     for (auto& pair : res) {
//       result.push_back(pair.second);
//     }
//
//     return result;
//   }
// };



int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
  // vector<string> strs = {""};
  // vector<string> strs = {"a"};

  Solution solution;

  for (auto s : solution.groupAnagrams(strs)) {
    for (auto c : s) {
      cout << c << " ";
    }
    cout << endl;
  }
}
