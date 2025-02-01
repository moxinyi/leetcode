#include <bits/stdc++.h>
using namespace std;
using ll = long long;


// c
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int h, w;
  cin >> h >> w;

  vector<string> map(h);
  for (int i = 0; i < h; i++) {
    cin >> map[i];
  }

  int l = 1001, r = -1, u = 1001, d = -1;

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char c = map[i][j];
      if (c == '#') {
        l = min(l, i);
        r = max(r, i);
        u = min(u, j);
        d = max(d, j);
      }
    }
  }

  for (int i = l; i <= r; i++) {
    for (int j = u; j <= d; j++) {
      char c = map[i][j];
      if (c == '.') {
        cout << "No" << '\n';
        return 0;
      }
    }
  }
  cout << "Yes" << '\n';
}





// b

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   int n;
//   cin >> n;
//   vector<ll> A(n);
//   for (int i = 0; i < n; i++) cin >> A[i];
//
//   for (int i = 0; i < n - 1; i++) {
//     if (A[1] * A[i] != A[0] * A[i + 1]) {
//       cout << "No" << '\n';
//       return 0;
//     }
//   }
//   cout << "Yes" << '\n';
// }


// a

// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   bool plus = false, minus = false;
//   int cnt = 0;
//
//   for (int i = 1; i <= 5; i++) {
//     int n;
//     cin >> n;
//     if (n - i == -1) {
//       minus = true;
//     } else if (n - i == 1) {
//       plus = true;
//     } else if (n == i) {
//       cnt++;
//     }
//   }
//
//   if (plus && minus && cnt == 3) {
//     cout << "Yes" << '\n';
//   } else {
//     cout << "No" << '\n';
//   }
// }

// Other solution;
// int main() {
//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//
//   int num, sum = 0;
//   for (int i = 1; i <= 5; i++) {
//     cin >> num;
//     if (num - i > 0) {
//       sum += num - i;
//     } else {
//       sum += i - num;
//     }
//   }
//   if (sum == 2) {
//     cout << "Yes" << '\n';
//   } else {
//     cout << "No" << '\n';
//   }
//
// }


