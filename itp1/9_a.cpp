#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
	string w, t;
	cin >> w;

	int cnt = 0;
	while (true) {
		cin >> t;
		if (t == "END_OF_TEXT") break;
		if (strcasecmp(w.c_str(), t.c_str()) == 0) ++cnt;
	}

	cout << cnt << endl;
	return 0;
}
