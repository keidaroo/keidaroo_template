const int MAX_N = 200005;
long long fact[MAX_N];
long long fact_inv[MAX_N];
long long bin_pow_mod(long long x, long long y) {
  if (x == 0)
    return 0;
  long long prod = 1;
  while (y > 0) {
    if (y & 1) {
      prod = (prod * x) % MOD;
    }
    x = (x * x) % MOD;
    y >>= 1;
  }
  return prod % MOD;
}
void init_fact() {
  fact[0] = 1, fact_inv[0] = 1;
  for (int i = 1; i < MAX_N; ++i) {
    fact[i] = (fact[i - 1] * i) % MOD;
    fact_inv[i] = bin_pow_mod(fact[i], MOD - 2);
  }
}
ll calc(ll all, ll k) {
  if (k > all) {
    return 0;
  }
  return fact[all] * fact_inv[all - k] % MOD * fact_inv[k] % MOD;
}
int main() {
  // nCkの場合
  calc(n, k);
}
