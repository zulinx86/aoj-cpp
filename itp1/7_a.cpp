#include <iostream>
using namespace std;

int main(void) {
	while (true) {
		int mid, fin, mak;
		cin >> mid >> fin >> mak;
		if (mid == -1 && fin == -1 && mak == -1) break;
		if (mid == -1 || fin == -1) cout << "F"<< endl;
		else if (mid + fin >= 80) cout << "A" << endl;
		else if (mid + fin >= 65) cout << "B" << endl;
		else if (mid + fin >= 50) cout << "C" << endl;
		else if (mid + fin >= 30) {
			if (mak >= 50) cout << "C" << endl;
			else cout << "D" << endl;
		} else cout << "F" << endl;
	}
}
