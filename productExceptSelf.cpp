#include <bits/stdc++.h>
using namespace std;


// Brute force
// O(n^2)
// O(1)

// class Solution {
// public:
//   vector<int> productExceptSelf(vector<int>& nums) {
//     vector<int> res(nums.size(), 1);
//     for (size_t i = 0; i < nums.size(); i++) {
//       for (size_t j = 0; j < nums.size(); j++) {
//         if (i != j) {
//           res[i] *= nums[j];
//         }
//       }
//     }
//
//     return res;
//   }
// };


// Division
// O(n)
// O(1)

// class Solution {
// public:
//   vector<int> productExceptSelf(vector<int>& nums) {
//     int countZero = 0;
//     int prod = 1;
//
//     for (size_t i = 0; i < nums.size(); i++) {
//       if (nums[i] == 0) {
//         countZero++;
//       } else {
//         prod *= nums[i];
//       }
//     }
//
//     if (countZero > 1) {
//       return vector<int>(nums.size(), 0);
//     }
//
//     vector<int> res(nums.size());
//     for (size_t i = 0; i < nums.size(); i++) {
//       if (countZero == 1) {
//         res[i] = (nums[i] == 0) ? prod : 0;
//       } else {
//         res[i] = prod / nums[i];
//       }
//     }
//
//     return res;
//   }
// };



// Store each prefix and postfix separately.
// O(n)
// O(n)

class Solution {
public:
  vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n);
    vector<int> prefix(n);
    vector<int> postfix(n);

    int prod_pre = 1;
    for (int i = 0; i < n; i++) {
      prefix[i] = prod_pre;
      prod_pre *= nums[i];
    }

    int prod_post = 1;
    for (int i = n - 1; i >= 0; i--) {
      postfix[i] = prod_post;
      prod_post *= nums[i];
    }

    for (int i = 0; i < n; i++) {
      res[i] = prefix[i] * postfix[i];
    }

    return res;
  }
};

// Optimal, store each prefix multiplication result int res, then multiply with each postfix.
// O(n)
// O(1)

// class Solution {
// public:
//   vector<int> productExceptSelf(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> res(n, 1);
//
//     int prefix = 1;
//     for (int i = 0; i < n; i++) {
//       res[i] = prefix;
//       prefix *= nums[i];
//     }
//
//     int postfix = 1;
//     for (int i = n - 1; i >= 0; i--) {
//       res[i] *= postfix;
//       postfix *= nums[i];
//     }
//
//     return res;
//   }
// };


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums = {1, 2, 3, 4};
  // vector<int> nums = {-1, 1, 0, -3, 3};

  Solution solution;
  for (int& n : solution.productExceptSelf(nums)) {
    cout << n << " ";
  }
}
