#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// O(n^2)
// O(1)
class Solution {
public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i] > 0) break;
      if (i > 0 && nums[i] == nums[i - 1]) continue;

      int l = i + 1, r = nums.size() - 1;
      while (l < r) {
        int sum = nums[i] + nums[l] + nums[r];
        if (sum > 0) r--;
        else if (sum < 0) l++;
        else {
          ans.push_back({nums[i], nums[l], nums[r]});
          l++;
          r--;
          while (l < r && nums[l] == nums[l - 1]) l++;
        }
      }
    }
    return ans;
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  Solution solution;
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  // vector<int> nums = {0, 1, 1};
  // vector<int> nums = {0, 0, 0};

  for (auto p : solution.threeSum(nums)) {
    for (auto n : p) {
      cout << n << " ";
    }
    cout << '\n';
  }
}
