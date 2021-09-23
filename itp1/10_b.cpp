#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(void) {
	double a, b, c;
	cin >> a >> b >> c;

	printf("%.8f %.8f %.8f\n",
		a * b * sin(c * M_PI / 180.0) / 2.0,
		a + b + sqrt(a * a + b * b - 2.0 * a * b * cos(c * M_PI / 180.0)),
		b * sin(c * M_PI / 180.0));
	return 0;
}
