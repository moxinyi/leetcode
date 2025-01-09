#include <bits/stdc++.h>
using namespace std;


//Brute force
//O(n^2)
//O(1)

// class Solution {
// public:
//   bool containsDuplicate(vector<int>& nums) {
//     for (int i = 0; i < int(nums.size()); i++) {
//       for (int j = i + 1; j < int(nums.size()); j++) {
//         if (nums[i] == nums[j]) {
//           return true;
//         }
//       }
//     }
//     return false;
//   }
// };


// sorted
// O(nlogn)
// O(1)

// class Solution {
// public:
//   bool containsDuplicate(vector<int>& nums) {
//     sort(nums.begin(), nums.end());
//     for (int i = 1; i < int(nums.size()); i++) {
//       if (nums[i] == nums[i - 1]) {
//         return true;
//       }
//     }
//     return false;
//   }
// };


// hashmap
// O(n)
// O(n)

// class Solution {
// public:
//   bool containsDuplicate(vector<int>& nums) {
//     unordered_map<int, int> freq;
//     for (int& n : nums) {
//       freq[n]++;
//       if (freq[n] > 1) {
//         return true;
//       }
//     }
//     return false;
//   }
// };


// hashset
// O(n)
// O(n)

// class Solution {
// public:
//   bool containsDuplicate(vector<int>& nums) {
//     unordered_set<int> seen;
//     for (int n : nums) {
//       if (seen.count(n)) {
//         return true;
//       }
//       seen.insert(n);
//     }
//     return false;
//   }
// };


// hashset
// O(n)
// O(n)

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    return unordered_set<int>(nums.begin(), nums.end()).size() < nums.size();
  }
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Solution solution;
  vector<int> nums = {1, 2, 3, 4};

  cout << (solution.containsDuplicate(nums) ? "true" : "false") << endl;
}
