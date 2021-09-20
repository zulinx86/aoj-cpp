#include <iostream>
using namespace std;

int main(void) {
	int S;
	cin >> S;
	cout << S / 60 / 60 << ":" << (S / 60) % 60 << ":" << S % 60 << endl;
	return 0;
}
