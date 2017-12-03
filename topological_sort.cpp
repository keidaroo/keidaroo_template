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

vector<ll> topological_sort(ll v, std::vector<ll> G[],
                            ll num[]) { // numは入次数
  std::vector<ll> zero, tpsorted; //入次数ゼロのもの、ソートした結果

  REP(i, v) {
    if (num[i] == 0) {
      zero.push_back(i);
    }
  }
  while (zero.size()) {
    ll now = zero[zero.size() - 1];
    tpsorted.push_back(now);
    zero.pop_back();
    for (auto &j : G[now]) {
      num[j]--;
      if (num[j] == 0) {
        zero.push_back(j);
      }
    }
  }
  return tpsorted;
}
//---------------------------------------------------------------//
int main() {
  ll v, e;
  std::vector<ll> G[5001];
  ll h[5001] = {};
  cin >> v >> e;
  REP(i, e) {
    ll a, b;
    cin >> a >> b;
    a--;
    b--;
    G[a].push_back(b); // bのほうが上
    h[b]++;            //入次数++
  }
  std::vector<ll> tp = topological_sort(n, G, h);
}
//---------------------------------------------------------------//
