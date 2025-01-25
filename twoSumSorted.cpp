#include <bits/stdc++.h>
using namespace std;


// Two pointer
// O(n)
// O(1)
class Solution {
public:
  vector<int> twoSum(vector<int>& numbers, int target) {
    int l = 0, r = int(numbers.size()) - 1;

    while (l < r) {
      int curSum = numbers[l] + numbers[r];
      if (curSum < target) {
        l++;
      } else if (curSum > target) {
        r--;
      } else {
        return {l + 1, r + 1};
      }
    }
    return {};
  }
};



int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  // vector<int> numbers = {2, 7, 11, 15};
  // int target = 9;
  // vector<int> numbers = {2, 3, 4};
  // int target = 6;
  vector<int> numbers = {-1, 0};
  int target = -1;

  Solution solution;
  for (int n : solution.twoSum(numbers, target)) {
    cout << n << " ";
  }
}
