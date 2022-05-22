#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	stack<long long> s;
	string input;
	while(cin >> input) 
	{
		int a, b;
		if (input == "+")
		{
			b = s.top();
			s.pop();
			a = s.top();
			s.pop();
			s.push(a + b);
		}
		else if (input == "-")
		{
			b = s.top();
			s.pop();
			a = s.top();
			s.pop();
			s.push(a - b);
		}
		else if (input == "*")
		{
			b = s.top();
			s.pop();
			a = s.top();
			s.pop();
			s.push(a * b);
		}
		else
			s.push(stoi(input));
	}

	cout << s.top();
	return 0;
}