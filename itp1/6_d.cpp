#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;

	vector<vector<int> > a(n, vector<int>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	vector<int> b(m);
	for (int i = 0; i < m; ++i) cin >> b[i];

	vector<int> ans(n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			ans[i] += a[i][j] * b[j];
		}
	}

	for (int i = 0; i < n; ++i) cout << ans[i] << endl;
	return 0;
}
