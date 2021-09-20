#include <iostream>
using namespace std;

int main(void) {
	int a, b;
	char op;
	while (true) {
		cin >> a >> op >> b;
		if (op == '?') break;
		else if (op == '+') cout << a + b << endl;
		else if (op == '-') cout << a - b << endl;
		else if (op == '*') cout << a * b << endl;
		else if (op == '/') cout << a / b << endl;
	}
	return 0;
}
