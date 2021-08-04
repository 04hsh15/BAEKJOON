//https://www.acmicpc.net/problem/2748
#include <iostream>
using namespace std;

long long arr[90];

long long Fibonacci(int n) {
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 0; i < n; i++) {
		arr[i + 2] = arr[i + 1] + arr[i];
	}
	return arr[n];
}

int main() {
	int n;
	cin >> n;
	cout << Fibonacci(n);
}