
ll lis(ll n, vector<ll> &A) {
  vector<ll> L(A.size() + 1, 0);
  L[0] = A[0];
  ll length = 1;
  for (int i = 1; i < n; i++) {
    if (L[length - 1] < A[i]) {
      L[length++] = A[i];
    } else {
      *lower_bound(L.begin(), L.begin() + length, A[i]) = A[i];
    }
  }
  return length;
}
