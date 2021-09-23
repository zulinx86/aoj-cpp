#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s, p;
	cin >> s >> p;

	int n = s.size();
	s += s;

	for (int i = 0; i < n; ++i) {
		bool flag = true;
		for (int j = 0; j < p.size(); ++j) {
			if (s[i + j] != p[j]) {
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}
