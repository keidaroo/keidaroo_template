ll power(ll a, ll b, ll p) { // aのb乗をpで割ったあまりを計算する関数
  if (b == 0) {
    return 1;
  }                            // 0乗は1
  if (b % 2 == 0) {            //２の倍数なら省略できて
    ll d = power(a, b / 2, p); //わるう
    return (d * d) % p;        //２割ったので二乗う
  }
  return a * power(a, b - 1, p) % p; //２で割れないなら一個進める
}
