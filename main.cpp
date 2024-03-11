#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n;
stack<ll> s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  for (auto i = 0; i < n; ++i) {
    ll q;
    cin >> q;
    if (1 == q) {
      ll x;
      cin >> x;

      s.push(x);
    } else if (2 == q) {
      if (s.empty()) {
        cout << -1 << '\n';
        continue;
      }

      cout << s.top() << '\n';
      s.pop();
    } else if (3 == q) {
      cout << s.size() << '\n';
    } else if (4 == q) {
      cout << (s.empty() ? 1 : 0) << '\n';
    } else if (5 == q) {
      if (s.empty()) {
        cout << -1 << '\n';
        continue;
      }

      cout << s.top() << '\n';
    }
  }

  return 0;
}