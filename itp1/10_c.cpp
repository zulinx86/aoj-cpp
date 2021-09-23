#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>
using namespace std;

void stddev(int n) {
	double avg = 0;
	vector<double> s(n);
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		avg += s[i] / (double)n;
	}

	double var = 0;
	for (int i = 0; i < n; ++i) {
		var += (s[i] - avg) * (s[i] - avg) / (double)n;
	}

	printf("%.8f\n", sqrt(var));
}

int main(void) {
	while (true) {
		int n;
		cin >> n;

		if (n == 0) break;
		stddev(n);
	}

	return 0;
}

