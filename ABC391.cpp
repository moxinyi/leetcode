#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// c
int main() {
  ios:: sync_with_stdio(false);
  cin.tie(nullptr);
  int n, q;
  cin >> n >> q;
  vector<int> dove(n + 1);
  for (int i = 1; i <= n; i++) {
    dove[i] = i;
  }
  vector<int> home(n+1, 1);
  int ans = 0;
  for (int i = 0; i < q; i++) {
    int c;
    cin >> c;
    if (c == 1) {
      int a, b;
      cin >> a >> b;
      if (dove[a] != b) {
        home[b]++;
        home[dove[a]]--;
        // for (auto k : home) {
        //   cout << k << " ";
        // }
        // cout << endl;
        if (home[b] == 2) {
          ans++;
        }
        if (home[dove[a]] == 1) {
          ans--;
        }
        dove[a] = b;
      }
    } else {
      cout << ans << '\n';
    }
  }
}


// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   vector<string> id = {"N", "E", "W", "S", "NE", "NW", "SE", "SW"};
//   string c;
//   cin >> c;
//   string ans;
//   if (c == "N") ans = id[3];
//   if (c == "E") ans = id[2];
//   if (c == "W") ans = id[1];
//   if (c == "S") ans = id[0];
//   if (c == "NE") ans = id[7];
//   if (c == "NW") ans = id[6];
//   if (c == "SE") ans = id[5];
//   if (c == "SW") ans = id[4];
//
//   cout << ans << endl;
//
// }
