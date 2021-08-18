//https://www.acmicpc.net/problem/2675
#include <iostream>
#include <string>
using namespace std;

int main() {
	int T, R;
	cin >> T;
	string S;

	for (int i = 0; i < T; i++) {
		cin >> R >> S;
		for (int j = 0; j < S.length(); j++) {
			for (int k = 0; k < R; k++) {
				cout << S[j];
			}
		}
		cout << endl;
	}
}