//https://www.acmicpc.net/problem/4949
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	while (1) {
		string str;
		getline(cin, str);
		stack<char> stk;

		if (str[0] == '.')
			break;
		
		for (int i = 0; i < str.length() - 1; i++) {
			if (str[i] == '(')
				stk.push('(');

			if (str[i] == '[')
				stk.push('[');

			if (str[i] == ']')
			{
				if (!stk.empty() && stk.top() == '[')
					stk.pop();
				else {
					printf("no\n");
					break;
				}
			}

			if (str[i] == ')')
			{
				if (!stk.empty() && stk.top() == '(')
					stk.pop();
				else {
					printf("no\n");
					break;
				}
			}

			if (stk.empty() && i == str.length() - 2)
				printf("yes\n");

			else if (!stk.empty() && i == str.length() - 2)
				printf("no\n");
		}
	}
}