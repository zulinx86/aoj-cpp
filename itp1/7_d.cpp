#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<int> > a(n, vector<int>(m));
	vector<vector<int> > b(m, vector<int>(l));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) cin >> a[i][j];
	}
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < l; ++j) cin >> b[i][j];
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < l; ++j) {
			long long sum = 0;
			for (int k = 0; k < m; ++k) sum += a[i][k] * b[k][j];
			cout << sum;
			if (j == l - 1) cout << endl;
			else cout << " ";
		}
	}

	return 0;
}
