struct graph {
  int L, R;
  vector<vector<int>> adj;
  graph(int L, int R) : L(L), R(R), adj(L + R) {}
  void add_edge(int u, int v) {
    adj[u].push_back(v + L);
    adj[v + L].push_back(u);
  }
  int maximum_matching() {
    vector<int> visited(L), mate(L + R, -1);
    function<bool(int)> augment = [&](int u) { // DFS
      if (visited[u])
        return false;
      visited[u] = true;
      for (int w : adj[u]) {
        int v = mate[w];
        if (v < 0 || augment(v)) {
          mate[u] = w;
          mate[w] = u;
          return true;
        }
      }
      return false;
    };
    int match = 0;
    for (int u = 0; u < L; ++u) {
      fill(visited.begin(), visited.end(), 0);
      if (augment(u))
        ++match;
    }
    return match;
  }
};

int main() {
  ll n;
  cin >> n;
  graph g(n, n);
  REP(i, n) {
    REP(j, n) { g.add_edge(i, j); }
  }
  cout << g.maximum_matching() << endl;
}
