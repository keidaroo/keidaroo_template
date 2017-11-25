struct edge {
    ll to;
    ll cost;
    edge() {}
    edge(ll to_, ll cost_)
    :to(to_), cost(cost_) {}
};
std::vector<edge> graph[N_MAX];

//O(ElogV)ダイクストラ
ll D[N_MAX];
void Dijkstra(uint32_t s)
{
    using P = std::pair<ll, ll>;//cost pos
    std::priority_queue<P, std::vector<P>, std::greater<P> > que;
    std::fill(std::begin(D), std::end(D), INF);

    D[s] = 0;
    que.emplace(0, s);
    while (!que.empty())
    {
        auto p = que.top(); que.pop();
        const auto& nowpos = p.second;
        const auto& nowcost = p.first;
        if (D[nowpos] < nowcost) { continue; }
        for (const auto& e : graph[nowpos])
        {
            auto cost = nowcost + e.cost;
            if (cost < D[e.to]) {
                D[e.to] = cost;
                que.emplace(cost, e.to);
            }
        }
    }
}
