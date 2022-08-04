#include <iostream>
using namespace std;

int main() {
	int a_level, b_level, c_level, num;
	cin >> a_level >> b_level >> c_level;

	cin >> num;

	int groups_score[1000] = {};

	for (int i = 0; i < num; i++) {
		int total = 0;
		for (int j = 0; j < 3; j++) {
			
			int a, b, c;
			cin >> a >> b >> c;

			total += a * a_level + b * b_level + c * c_level;
		}
		groups_score[i] = total;
	}

	int max = 0;

	for (int i = 0; i < num; i++) {
		if (groups_score[i] > max)
			max = groups_score[i];
	}

	cout << max;
}