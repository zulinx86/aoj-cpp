#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(void) {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	printf("%.7f\n", sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
	return 0;
}
