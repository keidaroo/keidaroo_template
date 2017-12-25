
ll par[300000], depth[300000];

void init(ll n) {
  REP(i, n) {
    par[i] = i;
    depth[i] = 0;
  }
  return;
}

ll find(ll x) {
  if (par[x] == x) {
    return x;
  } else {
    return par[x] = find(par[x]);
  }
}

void merge(ll x, ll y) {
  x = find(x);
  y = find(y);
  if (x == y) {
    return;
  }
  if (depth[x] > depth[y]) {
    par[y] = x;
  } else {
    par[x] = y;
    if (depth[x] == depth[y]) {
      depth[y]++;
    }
  }
}

bool same(ll x, ll y) {
  if (find(x) != find(y)) {
    return false;
  }
  return true;
}
//親を知りたいときは必ずfind()を使う！
