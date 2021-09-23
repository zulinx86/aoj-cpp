#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string s;
	
	int cnt[26] = {0};
	do {
		getline(cin, s);
		for (int i = 0; i < s.size(); ++i) {
			if (65 <= s[i] && s[i] <= 90) ++cnt[s[i] - 65];
			if (97 <= s[i] && s[i] <= 122) ++cnt[s[i] - 97];
		}
	} while (s != "");

	for (int i = 0; i < 26; ++i) {
		cout << (char)(97 + i) << " : " << cnt[i] << endl;
	}

	return 0;
}
