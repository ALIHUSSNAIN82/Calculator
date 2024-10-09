#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char op;
	cout << "Enter the First number:";
	cin >> num1;
	cout << "Enter the Second number:";
	cin >> num2;
	cout << "Enter Operator(i.e +, -, *, /):";
	cin >> op;
	if (op == '+')
	{
		cout << "Addition is:" << num1 + num2;
	}
	else if (op == '-')
	{
		cout << "Subtraction is:" << num1 - num2;
	}
	else if (op == '*')
	{
		cout << "Multiply is:" << num1 * num2;
	}
	else if (op == '/')
	{
		cout << "Division is:" << num1 / num2;
	}
	else
	{
		cout << "Invalid operation";
	}

	return 0;
}
