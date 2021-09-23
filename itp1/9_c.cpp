#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	int t = 0, h = 0;
	string ts, hs;
	for (int i = 0; i < n; ++i) {
		cin >> ts >> hs;
		if (ts == hs) {
			++t;
			++h;
		} else if (ts > hs) {
			t += 3;
		} else if (ts < hs) {
			h += 3;
		}
	}

	cout << t << " " << h << endl;
	return 0;
}

