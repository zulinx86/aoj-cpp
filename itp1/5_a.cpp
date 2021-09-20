#include <iostream>
using namespace std;

void draw_rect(int H, int W) {
	for (int h = 0; h < H; ++h) {
		for (int w = 0; w < W; ++w) {
			cout << "#";
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
		draw_rect(H, W);
	}
	return 0;
}
