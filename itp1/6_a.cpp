#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) cin >> a[i];

	reverse(a.begin(), a.end());
	
	for (int i = 0; i < n; ++i) {
		cout << a[i];
		if (i == n - 1) cout << endl;
		else cout << " ";
	}

	return 0;
}

