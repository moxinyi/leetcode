#include <bits/stdc++.h>
using namespace std;


// Sort
// O(nlogn)
// O(n)
// class Solution {
// public:
//   vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int, int> freq;
//     for (int n : nums) freq[n]++;
//
//     vector<pair<int, int>> arr;
//     for (const auto& p : freq) arr.push_back({p.second, p.first});
//     sort(arr.rbegin(), arr.rend());
//
//     vector<int> ans;
//     for (int i = 0; i < k; i++) ans.push_back(arr[i].second);
//
//     return ans;
//   }
// };





// max-heap
// map to count frequency and pq to pop the biggest value.
// O(nlogn)
// O(n+k)
// class Solution {
// public:
//   vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int, int> freq;
//     for (int n : nums) {
//       freq[n]++;
//     }
//
//     priority_queue<pair<int, int>> pq;
//     for (auto& p : freq) {
//       pq.push({p.second, p.first});
//     }
//
//     vector<int> ans;
//     for (int i = 0; i < k; i++) {
//       ans.push_back(pq.top().second);
//       pq.pop();
//     }
//
//     return ans;
//   }
// };


// min-heap with k size
// O(nlongk);
// O(n+k)

// class Solution {
// public:
//   vector<int> topKFrequent(vector<int>& nums, int k) {
//     unordered_map<int, int> freq;
//     for (int n : nums) freq[n]++;
//
//     priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//     for (const auto& p : freq) {
//       pq.push({p.second, p.first});
//       if (pq.size() > k) {
//         pq.pop();
//       }
//     }
//
//     vector<int> ans;
//     for (int i = 0; i < k; i++) {
//       ans.push_back(pq.top().second);
//       pq.pop();
//     }
//
//     return ans;
//   }
// };


// Bucket sort, count's index means the frequency and the content contains the vector<int> of each number which appears index time.
// O(n)
// O(n)

class Solution {
public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int n : nums) freq[n]++;

    vector<vector<int>> count(nums.size() + 1);
    for (const auto& p : freq) {
      count[p.second].push_back(p.first);
    }

    vector<int> ans;
    for (int i = int(nums.size()); i > 0; i--) {
      for (int d : count[i]) {
        ans.push_back(d);
        if (ans.size() == k) {
          return ans;
        }
      }
    }
    return ans;
  }
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<int> nums = {1, 1, 1, 2, 2, 3};
  int k = 2;

  // vector<int> nums = {1};
  // int k = 1;

  Solution solution;
  for (auto n : solution.topKFrequent(nums, k)) {
    cout << n << " ";
  }
}
