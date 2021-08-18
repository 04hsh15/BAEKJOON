//https://www.acmicpc.net/problem/1652
#include <iostream>
using namespace std;

int main() {
	int N, cnt, row = 0, col = 0;
	char s[100][100];

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> s[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		cnt = 0;
		for (int j = 0; j < N; j++) {
			if (s[i][j] == '.') {
				cnt++;
			}
			else if (s[i][j] == 'X') {
				if (cnt >= 2) {
					row++;
					cnt = 0;
				}
				else cnt = 0;
			}
		}
		if (cnt >= 2) row++;
	}

	for (int i = 0; i < N; i++) {
		cnt = 0;
		for (int j = 0; j < N; j++) {
			if (s[j][i] == '.') {
				cnt++;
			}
			else if (s[j][i] == 'X') {
				if (cnt >= 2) {
					col++;
					cnt = 0;
				}
				else cnt = 0;
			}
		}
		if (cnt >= 2) col++;
	}

	cout << row << " " << col;
}