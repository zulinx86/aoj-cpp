#include <iostream>
using namespace std;

int main(void) {
	while (true) {
		int n, x;
		cin >> n >> x;
		if (n == 0 && x == 0) break;

		int cnt = 0;
		for (int i = 1; i <= n - 1; ++i) {
			for (int j = i + 1; j <= n; ++j) {
				int k = x - i - j;
				if (1 <= k && k <= n && k > i && k > j) ++cnt;
			}
		}
		cout << cnt << endl;
	}

	return 0;
}
