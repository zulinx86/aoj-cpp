#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string x;
	while (true) {
		cin >> x;
		if (x == "0") break;
		int sum = 0;
		for (int i = 0; i < x.size(); ++i) sum += x[i] - '0';
		cout << sum << endl;
	}

	return 0;
}
