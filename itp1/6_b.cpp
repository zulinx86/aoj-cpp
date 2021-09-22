#include <iostream>
#include <vector>
using namespace std;

int s2i(char c) {
	switch (c) {
	case 'S':
		return 0;
	case 'H':
		return 1;
	case 'C':
		return 2;
	case 'D':
		return 3;
	}
	return -1;
}

char i2s(int n) {
	switch (n) {
	case 0:
		return 'S';
	case 1:
		return 'H';
	case 2:
		return 'C';
	case 3:
		return 'D';
	}
	return '-';
}

int main(void) {
	int n;
	cin >> n;

	bool cards[4][13] = { false };
	for (int i = 0; i < n; ++i) {
		char s;
		int n;
		cin >> s >> n;
		cards[s2i(s)][n - 1] = true;
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 13; ++j) {
			if (!cards[i][j]) cout << i2s(i) << " " << j + 1 << endl;
		}
	}

	return 0;
}
