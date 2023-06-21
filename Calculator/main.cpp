#include <iostream>

using namespace std;

int main() {

	int num1, num2;
	char op;

	cout << "Enter two numbers" << '\n';
	cin >> num1 >> num2;

	cout << "Now enter an operation (+,-,*,/,%)" << '\n';
	cin >> op;

	switch (op)
	{
	case '+':
		cout << num1 << " +" << ' ' << num2 << " =" << ' ' << num1 + num2 << '\n';
		break;
	case '-':
		cout << num1 << " -" << ' ' << num2 << " =" << ' ' << num1 - num2 << '\n';
		break;
	case '*':
		cout << num1 << " *" << ' ' << num2 << " =" << ' ' << num1 * num2 << '\n';
		break;
	case '/':
		if (num2 = 0)
			cout << "Cannot divide with 0";
		else
			cout << num1 << " /" << ' ' << num2 << " =" << ' ' << num1 / num2 << '\n';
		break;
	case '%':
		cout << num1 << " MOD" << ' ' << num2 << " =" << ' ' << num1 % num2 << '\n';
		break;
	default:
		break;
	}






}