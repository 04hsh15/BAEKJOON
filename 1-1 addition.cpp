//https://www.acmicpc.net/problem/9085
#include <iostream>
using namespace std;

int main() {
	int T, N, sum = 0;
	int* array = new int[100];
	int* result = new int[100];

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> array[j];
			sum += array[j];
		}
		result[i] = sum;
		sum = 0;
	}

	for (int i = 0; i < T; i++)
		cout << result[i] << endl;

	delete [] array;
	delete [] result;
}