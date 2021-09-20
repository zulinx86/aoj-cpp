#include <iostream>
using namespace std;

void print_chessboard(int H, int W) {
	for (int h = 0; h < H; ++h) {
		for (int w = 0; w < W; ++w) {
			if ((h + w) % 2 == 0) cout << "#";
			else cout << ".";
		}
		cout << endl;
	}
	cout << endl;
}

int main(void) {
	int H, W;
	while (true) {
		cin >> H >> W;
		if (H == 0 && W == 0) break;
		print_chessboard(H, W);
	}
	return 0;
}
