//https://www.acmicpc.net/problem/10773
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int K, num;
	stack<int> st;
	int sum = 0;

	cin >> K;

	for (int i = 0; i < K; i++) {
		cin >> num;

		if (num != 0)
			st.push(num);

		else if (num == 0)
			st.pop();
	}

	for (int i = 0; !st.empty(); i++) {
		sum += st.top();
		st.pop();
	}

	cout << sum;
}