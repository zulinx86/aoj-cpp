#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(void) {
	double r;
	cin >> r;
	printf("%.7f %.7f\n", M_PI * r * r, 2.0 * M_PI * r);
	return 0;
}
