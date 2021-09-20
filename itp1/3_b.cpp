#include <iostream>
using namespace std;

int main(void) {
	int i = 0, x = -1;
	while (true) {
		int x;
		cin >> x;
		if (x == 0) break;
		cout << "Case " << ++i << ": " << x << endl;
	}
	return 0;
}
