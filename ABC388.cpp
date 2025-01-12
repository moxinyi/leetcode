// A - ?UPC
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   string s;
//   cin >> s;
//   cout << s[0] << "UPC" << '\n';
// }



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



// E - Simultaneous Kagamimochi

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  ll L = 0, R = N / 2 + 1;
  while (R - L > 1) {
    ll M = (L + R) / 2;
    for (int i = 0; i < M; i++) {
      if (A[i] * 2 > A[N - M + i]) R = M;
    }
    if (R != M) L = M;
  }
  cout << L << '\n';
}
