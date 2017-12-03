#include <bits/stdc++.h>
typedef long long ll;
#define FOR(i, a, b) for (ll i = (signed)(a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define EREP(i, n) for (int i = (n)-1; i >= 0; --i)
#define mod 1000000007
#define pb(a) push_back((a))
#define INF 93193111451418101
#define MIN -93193111451418101
#define EPS 1e-11
#define tp(a, b, c) make_tuple(a, b, c)
using namespace std;
typedef pair<ll, ll> P;

ll n;
string s;
ll dp[100][2][10]; //桁数。上限ギリギリか、条件
//-------------------関数----------------------//

ll digitDP(ll digit, ll tight, ll num) { // digit,上限ギリギリの場合は0、条件
  if (digit == s.size())
    return num;

  if (dp[digit][tight][num])
    return dp[digit][tight][num];

  ll maxnum = tight ? 10 : s[digit] - '0' + 1;
  ll cnt = 0;
  REP(i, maxnum) {
    //この辺に何か書く
    if ((!tight) && i == maxnum - 1) {
      cnt += digitDP(digit + 1, 0, num);
    } else {
      cnt += digitDP(digit + 1, 1, num);
    }
  }
  return dp[digit][tight][num] = cnt;
}

int main() {
  cin >> s;
  cout << digitDP(0, 0, 0) << endl;
  return 0;
}
