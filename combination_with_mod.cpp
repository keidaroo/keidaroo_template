const int MAX_N = 200005;
long long fact[MAX_N];
long long fact_inv[MAX_N];
long long bin_pow_mod(long long x, long long y) {
	if (x == 0) return 0;
	long long prod = 1;
	while (y>0) {
		if (y & 1) {
			prod = (prod*x) % mod;
		}
		x = (x*x) % mod;
		y >>= 1;
	}
	return prod%mod;
}
struct init_fact {
	init_fact() {
		fact[0] = 1, fact_inv[0] = 1;
		for (int i = 1; i<MAX_N; ++i) {
			fact[i] = (fact[i - 1] * i) % mod;
			fact_inv[i] = bin_pow_mod(fact[i], mod - 2);
		}
	}
} init_fact;

int main(){
//nCkの場合
  fact[n]*fact_inv[c]%mod*fact_inv[k]%mod;
}
