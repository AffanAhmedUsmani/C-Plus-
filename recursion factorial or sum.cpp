#include <iostream>
using namespace std;
int function(int x)
{
	if (x == 0)
	{
		return 1;
	}
//	cout << x<<endl;
	int temp = x+ function(x - 1);//for factorial we add *
	//cout << "value of x after it har reached 1" << endl;
//	cout << temp<<endl;
	//cout << x << endl;
	return temp;
}
int main()
{
	int x = 6;
	int fact = function(x);
	
	cout << fact<<endl;
	system("pause");

	return 0;



}