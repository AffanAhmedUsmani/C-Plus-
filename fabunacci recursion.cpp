#include <iostream>
using namespace std;
int fib(int n)
{
	if (n <= 1)
		return n;
	
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int a = 4;
	cout << fib(a);	
    system("pause");
	return 0;



}