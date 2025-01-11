#include <bits/stdc++.h>
using namespace std;

// Brute force
// O(n^2)
// O(1)
// class Solution {
// public:
//   vector<int> twoSum(vector<int>& nums, int target) {
//     for (int i = 0; i < nums.size(); i++) {
//       for (int j = i + 1; j < nums.size(); j++) {
//         if (nums[i] + nums[j] == target) {
//           return {i, j};
//         }
//       }
//     }
//     return {};
//   }
// };


// two pointer then iterate to find index
// O(nlogn)
// O(n)
// class Solution {
// public:
//   vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int> tmp = nums;
//     sort(tmp.begin(), tmp.end());
//     int start = 0, end = int(nums.size()) - 1;
//     while (start < end) {
//       int sum = tmp[start] + tmp[end];
//       if (sum == target) {
//         int index1 = -1, index2 = -1;
//         for (int i = 0; i < nums.size(); i++) {
//           if (index1 == -1 && nums[i] == tmp[start]) {
//             index1 = i;
//           } else if (index2 == -1 && nums[i] == tmp[end] && i != index1) {
//             index2 = i;
//           }
//           if (index1 != -1 && index2 != -1) {
//             break;
//           }
//         }
//         return {index1, index2};
//       } else if (sum < target) {
//         start++;
//       } else {
//         end--;
//       }
//     }
//     return {};
//   }
// };


// two pointer with pair
// O(nlogn)
// O(n)
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> index;
    for (int i = 0; i < nums.size(); i++) {
      index.push_back({nums[i], i});
    }

    sort(index.begin(), index.end());
    int i = 0, j = int(nums.size()) - 1;

    while (i < j) {
      if (index[i].first + index[j].first == target) {
        return {index[i].second, index[j].second};
      } else if (index[i].first + index[j].first < target) {
        i++;
      } else {
        j--;
      }
    }
    return {};
  }
};

// unordered_map
// O(n)
// O(n)
// class Solution {
// public:
//   vector<int> twoSum(vector<int>& nums, int target) {
//     unordered_map<int, int> completion;
//     for (int i = 0; i < nums.size(); i++) {
//       int remain = target - nums[i];
//       if (completion.find(remain) != completion.end()) {
//         return {completion[remain], i};
//       } else {
//         completion[nums[i]] = i;
//       }
//     }
//     return {};
//   }
// };


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // vector<int> nums = {2, 7, 11, 15};
  // int target = 9;

  // vector<int> nums = {3, 3};
  // int target = 6;

  vector<int> nums = {-1, -2, -3, -4, -5};
  int target = -8;

  // vector<int> nums = {3, 2, 4};
  // int target = 6;

  Solution solution;
  for (int n : solution.twoSum(nums, target)) {
    cout << n << " ";
  }
  return 0;
}
