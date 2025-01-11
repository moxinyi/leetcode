// A - ?UPC
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  cout << s[0] << "UPC" << '\n';
}

// B - Heavy Snake

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   int N, D;
//   cin >> N >> D;
//   vector<int> ts(N), ls(N);
//   for (int i = 0; i < N; i++) {
//     cin >> ts[i] >> ls[i];
//   }
//
//   for (int d = 1; d <= D; d++) {
//     int wei = 0;
//     for (int n = 0; n < N; n++) {
//       wei = max(wei, ts[n] * (ls[n] + d));
//     }
//     cout << wei << '\n';
//   }
// }




// C - Various Kagamimochi

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   int n;
//   cin >> n;
//   vector<long long> as(n);
//   for (int i = 0; i < n; i++) {
//     cin >> as[i];
//   }
//
//   long long ans = 0;
//   for (int i = 0; i < n; i++) {
//     long long target = as[i] * 2;
//     auto it = lower_bound(as.begin(), as.end(), target);
//     ans += (n - (it - as.begin()));
//   }
//   cout << ans << '\n';
// }
