struct UnionFind {
	vector<int> r;
	UnionFind(int N) {
		r = vector<int>(N, -1);
	}
	int root(int x) {
		if (r[x] < 0) return x;
		return r[x] = root(r[x]);
	}
	bool unite(int x, int y) {
		x = root(x);
		y = root(y);
		if (x == y) return false;
		if (r[x] > r[y]) swap(x, y);
		r[x] += r[y];
		r[y] = x;
		return true;
	}
	int size(int x) {
		return -r[root(x)];
	}
};