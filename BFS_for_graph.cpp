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

// cut here

vector<ll> G[N_MAX]; //グラフ

void BFS(ll s, ll repeat) {
  bool vis[N_MAX] = {}; // repeat回までにたどり着くものを全列挙
  vis[s] = 1;
  queue<P> q; //場所、回数
  q.push(P(s, 0));
  while (!q.empty()) {
    ll place = q.front().first, many = q.front().second;
    q.pop();
    //ここに処理を書く

    //ここまで
    if (many == repeat)
      continue; //回数関係ない場合はここをコメントアウト

    for (auto i : G[place]) {
      if (vis[i])
        continue;
      vis[i] = 1;
      q.push(P(i, many + 1));
    }
  }
}
// cut here
int main() {
  ll n;
  cin >> n;
  REP(i, n) {
    ll a, b;
    cin >> a >> b;
    G[a - 1].pb(b - 1);
    G[b - 1].pb(a - 1);
  }
  BFS(0, 0); //回数関係させない
}
