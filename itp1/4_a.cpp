#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	printf("%d %d %.7f\n", a / b, a % b, (double)a / (double)b);
	return 0;
}
