#include <iostream>
using namespace std;

void print_frame(int H, int W) {
	for (int h = 0; h < H; ++h) {
		if (h == 0 || h == H - 1) {
			for (int w = 0; w < W; ++w) cout << "#";
		} else {
			for (int w = 0; w < W; ++w) {
				if (w == 0 || w == W - 1) cout << "#";
				else cout << ".";
			}
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
		print_frame(H, W);
	}
	return 0;
}
