#include <bits/stdc++.h>
using namespace std;


// map and set for each rows and cols and squas.
// O(n^2)
// O(n^2)
class Solution {
public:
  bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<int, unordered_set<char>> rows, cols;
    map<pair<int, int>, unordered_set<char>> squas;

    for (int r = 0; r < 9; r++) {
      for (int c = 0; c < 9; c++) {
        char m = board[r][c];
        if (m == '.') continue;

        pair<int, int> squaKey = {r / 3, c / 3};

        if (rows[r].count(m) || cols[c].count(m) || squas[squaKey].count(m)) {
          return false;
        }

        rows[r].insert(m);
        cols[c].insert(m);
        squas[squaKey].insert(m);
      }
    }
    return true;
  }
};


int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
  };

  // vector<vector<char>> board = {
  //   {'8', '3', '.', '.', '7', '.', '.', '.', '.'},
  //   {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
  //   {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
  //   {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
  //   {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
  //   {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
  //   {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
  //   {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
  //   {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
  // };

  Solution solution;
  cout << solution.isValidSudoku(board) << endl;

}
