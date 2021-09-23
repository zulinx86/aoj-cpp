#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
	string str;
	cin >> str;

	int q;
	cin >> q;

	string op, p;
	int a, b;
	for (int i = 0; i < q; ++i) {
		cin >> op;
		if (op == "print") {
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		} else if (op == "reverse") {
			cin >> a >> b;
			string rev;
			for (int i = b; i >= a; --i) rev += str[i];
			for (int i = a; i <= b; ++i) str[i] = rev[i - a];
		} else if (op == "replace") {
			cin >> a >> b >> p;
			for (int j = a; j <= b; ++j) str[j] = p[j - a];
		}
	}

	return 0;
}
