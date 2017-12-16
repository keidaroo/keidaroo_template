struct edge {
  ll to;
  ll cost;
  edge() {}
  edge(ll to_, ll cost_) : to(to_), cost(cost_) {}
};
std::vector<edge> graph[101];

bool in(ll x, ll y) {
  if (x < 0 || y < 0 || x == w || y == h)
    return 0;
  return 1;
}
// O(ElogV)ダイクストラ
ll D[H * W];
void Dijkstra(uint32_t s, ll m) {
  using P = std::pair<ll, ll>; // cost pos
  std::priority_queue<P, std::vector<P>, std::greater<P>> que;
  fill_all(D, (ll)INF);
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
    ll x = nowpos % w;
    ll y = nowpos / w;
    REP(i, 4) {
      ll xy[] = {0, 1, 0, -1, 0};
      if (!in(x + xy[i], y + xy[i + 1]))
        continue;
      ll cost = nowcost + "put something here";
      ll toplace = (y + xy[i + 1]) * w + x + xy[i];
      if (cost < D[toplace]) {
        D[toplace] = cost;
        que.emplace(cost, toplace);
      }
    }
  }
}
