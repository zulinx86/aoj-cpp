#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	vector<double> x(n), y(n);
	for (int i = 0; i < n; ++i) cin >> x[i];
	for (int i = 0; i < n; ++i) cin >> y[i];

	vector<double> d(n);
	for (int i = 0; i < n; ++i) d[i] = abs(x[i] - y[i]);

	double d1 = 0;
	for (int i = 0; i < n; ++i) d1 += d[i];

	double d2 = 0;
	for (int i = 0; i < n; ++i) d2 += d[i] * d[i];
	d2 = sqrt(d2);

	double d3 = 0;
	for (int i = 0; i < n; ++i) d3 += d[i] * d[i] * d[i];
	d3 = cbrt(d3);

	double dinf = 0;
	for (int i = 0; i < n; ++i) dinf = max(dinf, d[i]);

	printf("%.8f\n%.8f\n%.8f\n%.8f\n", d1, d2, d3, dinf);
	return 0;
}
