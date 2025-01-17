#include <bits/stdc++.h>
using namespace std;

// set and then check if the next element exist
// O(n^2)
// O(n)
// class Solution {
// public:
//   int longestConsecutive(vector<int>& nums) {
//     if (nums.size() == 0) return 0;
//     int res = 0;
//     unordered_set<int> numSet(nums.begin(), nums.end());
//
//     for (int n : nums) {
//       int length = 1;
//       while (numSet.find(n + length) != numSet.end()) {
//         length++;
//       }
//       res = max(res, length);
//     }
//     return res;
//   }
// };


// sort and check consecutive
// O(nlogn)
// O(1)
// class Solution {
// public:
//   int longestConsecutive(vector<int>& nums) {
//     if (nums.size() == 0) return 0;
//     sort(nums.begin(), nums.end());
//     int res = 0;
//
//     for (int i = 0; i < nums.size(); i++) {
//       int length = 1;
//       while (i + 1 < nums.size() && (nums[i + 1] - nums[i] == 1)) {
//         i++;
//         length++;
//         while (i + 1 < nums.size() && nums[i + 1] == nums[i]) i++;
//       }
//       res = max(res, length);
//     }
//     return res;
//   }
// };


// set and then only check if n is the start of a sequence by checking n - 1 exist or not.
// O(n)
// O(n)
class Solution {
public:
  int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0) return 0;
    int res = 0;
    unordered_set<int> numSet(nums.begin(), nums.end());

    for (int n : numSet) {
      if (numSet.find(n - 1) == numSet.end()) {
        int length = 1;
        while (numSet.find(n + length) != numSet.end()) {
          length++;
        }
        res = max(res, length);
      }
    }
    return res;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // vector<int> nums = {1, 2, 4, 3, 100, 200};
  vector<int> nums = {0, 2, 1, 3, 4, 5, 7, 6, 8, 9};

  Solution solution;
  cout << solution.longestConsecutive(nums) << endl;
}
