#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string d;
	int m, h;

	while (true) {
		cin >> d;
		if (d == "-") break;

		cin >> m;
		for (int i = 0; i < m; ++i) {
			cin >> h;
			d = d.substr(h) + d.substr(0, h);
		}

		cout << d << endl;
	}

	return 0;
}
