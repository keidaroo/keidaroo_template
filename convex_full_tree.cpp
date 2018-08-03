typedef complex<double> P;
typedef pair<double, double> dP;
namespace std {
bool operator<(const P &a, const P &b) {
  return real(a) != real(b) ? real(a) < real(b) : imag(a) < imag(b);
}
}

double cross(const P &a, const P &b) { return imag(conj(a) * b); }

double dot(const P &a, const P &b) { return real(conj(a) * b); }

int ccw(P a, P b, P c) {
  b -= a;
  c -= a;
  if (cross(b, c) > 0)
    return +1;
  if (cross(b, c) < 0)
    return -1;
  if (dot(b, c) < 0)
    return +2;
  if (norm(b) < norm(c))
    return -2;
  return 0;
}

vector<P> convex(vector<P> ps) {
  int n = (int)ps.size(), k = 0;
  sort(ps.begin(), ps.end());
  vector<P> ch(2 * n);
  for (int i = 0; i < n; ch[k++] = ps[i++]) {
    while (k >= 2 && ccw(ch[k - 2], ch[k - 1], ps[i]) <= 0)
      --k;
  }
  for (int i = n - 2, t = k + 1; i >= 0; ch[k++] = ps[i--]) {
    while (k >= t && ccw(ch[k - 2], ch[k - 1], ps[i]) <= 0)
      --k;
  }
  ch.resize(k - 1);
  return ch;
}
