#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int r, c;
	cin >> r >> c;
	vector<vector<int> > mat(r, vector<int>(c));
	for (int i = 0; i < r; ++i) {
		for (int j = 0; j < c; ++j) cin >> mat[i][j];
	}

	for (int i = 0; i < r; ++i) {
		int sum = 0;
		for (int j = 0; j < c; ++j) {
			cout << mat[i][j] << " ";
			sum += mat[i][j];
		}
		cout << sum << endl;
	}

	int all = 0;
	for (int i = 0; i < c; ++i) {
		int sum = 0;
		for (int j = 0; j < r; ++j) sum += mat[j][i];
		all += sum;
		cout << sum << " ";
	}
	cout << all << endl;

	return 0;
}

