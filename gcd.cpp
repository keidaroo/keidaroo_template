ll gcd(ll a, ll b) {
  if (a == 0 || b == 0) {
    return 0;
  }
  while (a % b) {
    a = a % b;
    swap(a, b);
  }
  return b;
}
