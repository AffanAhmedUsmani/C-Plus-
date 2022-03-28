#include <iostream>
using namespace std;

int main()
{
	int temp = 0,i=0,y=1;
	int n;
	cout << "enter number" ;
	cin >> n;
	while (i<=n)
	{
		if (i == 0)
		{
			cout << y << endl;
		}
		temp = temp + y;
		cout << temp << endl;
		y = y + temp;
		cout << y<<endl;
		
		i=i+3;
	}
	cout << n << "the fabonacci is " << y << endl;
	system("pause");
	return 0;



}