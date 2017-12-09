#include <bits/stdc++.h>
typedef long long int ll;
#define FOR(i, a, b) for (ll i = (signed)(a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define EREP(i, n) for (int i = (n)-1; i >= 0; --i)
#define MOD 1000000007
#define pb push_back
#define INF 93193111451418101
#define MIN -93193111451418101
#define EPS 1e-11
#define tp(a, b, c) make_tuple(a, b, c)
using namespace std;

struct edge {
  ll to;
  ll cost;
  edge() {}
  edge(ll to_, ll cost_) : to(to_), cost(cost_) {}
};
std::vector<edge> graph[N_MAX];//the amount of point

// O(ElogV)Dijkstra
ll D[N_MAX];
void Dijkstra(uint32_t s) {
  using P = std::pair<ll, ll>; // cost pos
  std::priority_queue<P, std::vector<P>, std::greater<P>> que;
  std::fill(std::begin(D), std::end(D), INF);

  D[s] = 0;
  que.emplace(0, s);
  while (!que.empty()) {
    auto p = que.top();
    que.pop();
    const auto &nowpos = p.second;
    const auto &nowcost = p.first;
    if (D[nowpos] < nowcost) {
      continue;
    }
    for (const auto &e : graph[nowpos]) {
      auto cost = nowcost + e.cost;
      if (cost < D[e.to]) {
        D[e.to] = cost;
        que.emplace(cost, e.to);
      }
    }
  }
}

//✂--------cut here--------✂
int main() {
  ll n, e; // vertex,edge
  cin >> n >> e;
  REP(i, e) {
    ll a, b, c; // a to b(b to a), cost c
    cin >> a >> b >> c;
    graph[a].push_back({b, c});
    graph[b].push_back({a, c});
  }
  Dijkstra(0); // dijkstra from point 0
  REP(i, n) {
    cout << D[i] << endl; // write the distance from point 0
  }
}
