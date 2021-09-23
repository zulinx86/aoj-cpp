#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	getline(cin, s);

	for (int i = 0; i < s.size(); ++i) {
		if (65 <= s[i] && s[i] <= 90) cout << (char)(s[i] + 32);
		else if (97 <= s[i] && s[i] <= 122) cout << (char)(s[i] - 32);
		else cout << s[i];
	}
	cout << endl;

	return 0;
}
