#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	char op ;
	int x, y  ;
	cout << "Name affan ahmed" << endl;
	cout << "enrollment :01-131192-002" << endl;
	
	cout << "Enter two numbers : ";
	cin >> x >> y;
	cout << "Enter operator either + or - or * or / or s or p: ";
	cin >> op ;
	
	switch (op)
	{
	case '+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case '/':
		
		if (y == 0)
		cout << "values are undefined";
		else
			cout << x / y;
		break;
	case 's':
		cout << " root is " << sqrt(x);
			break;
	case 'p':
		cout << "Power is " << pow(x, y);
		break;

	default:
		cout << "it is not a arithematic opertaion";

	}
	system("pause");
}
