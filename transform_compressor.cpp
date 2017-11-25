map<ll, ll> zip;
int unzip[100001];

int compress(vector<ll> &x) {
	sort(x.begin(), x.end());
	x.erase(unique(x.begin(), x.end()), x.end());
	for (int i = 0; i < x.size(); i++) {
		zip[x[i]] = i;
		unzip[i] = x[i];
	}
	return x.size();
}
