ll N /*値*/;
bool prime[114514];
void eratosthenes() {
  REP(i, N) prime[i] = 1;
  prime[0] = prime[1] = 0;
  REP(i, N) {
    if (prime[i]) {
      for (int j = i + i; j < N; j += i) {
        prime[j] = 0;
      }
    }
  }
}
