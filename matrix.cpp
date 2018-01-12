vector<std::vector<ll>> grid(500);

vector<vector<ll>> matrixcalc(vector<vector<ll>> l, vector<vector<ll>> r,
                              ll ysize) {
  vector<vector<ll>> ans(101);
  REP(i, (signed)ysize) {         // ansのy
    REP(j, (signed)r[0].size()) { // ansのx
      ll cnt = 0;
      REP(z, (signed)l[0].size()) {
        cnt ^= (l[i][z] & r[z][j]);
      } //それぞれ掛け算と足し算をする(^と&
      ans[i].pb(cnt);
    }
  }
  return ans;
}

vector<vector<ll>> power(ll b) { // aのb乗をpで割ったあまりを計算する関数
  if (b == 1) {
    return grid;
  }
  if (b % 2 == 0) {                         //２の倍数なら省略できて
    vector<vector<ll>> d = power(b / 2);    //わるう
    return (matrixcalc(d, d, d[0].size())); //２割ったので二乗う
  }
  return matrixcalc(grid, power(b - 1), k); //２で割れないなら一個進める
}
