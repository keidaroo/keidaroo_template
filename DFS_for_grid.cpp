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
ll grid[1001][1001];

bool vis[1001][1001] = {}; // Just a DFS :)
ll h, w;
bool in(ll x, ll y) {
  if (x < 0 || y < 0 || x == w || y == h)
    return 0;
  return 1;
}

ll DFS(ll x, ll y) {
  ll xy[] = {0, 1, 0, -1, 0};
  vis[x][y] = 1;
  // put some stuff here

  //
  REP(i, 4) {
    if (in(x + xy[i], y + xy[i + 1]))
      DFS(x + xy[i], y + xy[i + 1]); // put some stuff here
  }
  return 0; // or something
}
// cut here
int main() {
  cin >> h >> w;
  DFS(0, 0);
}
