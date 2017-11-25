  vector<ll> topological_sort(ll v, std::vector<ll> G[], ll num[]) {//numは入次数
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
    int main(){
      ll v,e;
      std::vector<ll> G[5001];
      ll h[5001] = {};
      cin >> v >> e;
      REP(i, e) {
        ll a, b;
        cin >> a >> b;
        a--;
        b--;
        G[a].push_back(b);
        h[b]++;
      }
      std::vector<ll> tp = topological_sort(n, G, h);
    }
        //---------------------------------------------------------------//
