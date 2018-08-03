ll V;
const ll MAX_V = 1e5;
vector<ll> G[MAX_V], rG[MAX_V], vs; // vsは帰り順の並び
bool used[MAX_V];
int cmp[MAX_V];

void addEdge(int from, int to) {
  // 0-indexの場合
  G[from].pb(to);
  rG[to].pb(from);
}

void dfs(int v) {
  used[v] = true;
  for (auto &a : G[v]) {
    if (!used[a])
      dfs(a);
  }
}

void rdfs(int v, int k) {
  used[v] = true;
  cmp[v] = k;
  for (auto &a : rG[v]) {
    if (!used[a])
      rdfs(a, k);
  }
}

int scc() {
  memset(used, 0, sizeof(used));
  vs.clear();
  REP(v, V) {
    if (!used[v])
      dfs(v);
  }
  memset(used, 0, sizeof(used));
  int k = 0;
  for (int i = vs.size() - 1; i >= 0; i--) {
    if (!used[vs[i]])
      rdfs(vs[i], k++);
  }
  return k;
}
