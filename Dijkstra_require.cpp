#define N_MAX 114514
struct edge {
  ll to;
  ll cost;
  edge() {}
  edge(ll to_, ll cost_) : to(to_), cost(cost_) {}
};
std::vector<edge> graph[N_MAX];

// O(ElogV)ダイクストラ
set<P> D[N_MAX]; // time,how many
void Dijkstra(uint32_t s) {
  using TP = std::pair<ll, P>; // cost cnt pos
  std::priority_queue<TP, std::vector<TP>, std::greater<TP>> que;
  std::fill(std::begin(D), std::end(D), INF);

  D[s].insert(P(0, 0));
  que.emplace(0, 0, s);
  while (!que.empty()) {
    auto p = que.top();
    que.pop();
    const auto &nowpos = p.second.second;
    const auto &nowcost = p.first;
    const auto &nowcnt = p.second.first;
    auto itr = D[nowpos].lower_bound(P(nowcost, -1));
    bool destroy = 0;
    while (itr != D[nowpos].end()) {
      //もしいまより進捗出ていない場合
      if ((*itr).second <= nowcnt) {
        D[nowpos].erase(itr++);
      }
    }
    if (itr != D[nowpos].begin() && (*itr).second >= nowcnt)
      destroy = 1;

    if (destroy)
      continue;
    D[nowpos].insert(P(nowcost, nowcnt));
    for (const auto &e : graph[nowpos]) {
      auto cost = nowcost + e.cost;
      que.emplace(cost, nowcnt +/*put something here*/, e.to);
    }
  }
}
//合っている自信がない
