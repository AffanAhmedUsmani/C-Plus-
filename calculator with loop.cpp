#include<iostream>
using namespace std;
int main()
{
	int num1, num2;
	cout<<"Name affanahmed"<<endl;
	cout<<"enrollment :01-131192-002"<<endl;;
	char ch='y';
	char choice ;
	while (ch == 'y' || ch == 'y')
	{
		cout<<"Press 1 for add"<<  endl;
		cout<<"press 2 for substract"<<  endl;
		cout<<"press 3 for multiply"<<  endl;
		cout<<"press 4 for divide "<< endl;
		int add = 1;
		int substract = 2;
		int multiply = 3;
		int divide = 4;
		cin>> choice;
		switch (choice)

		{
		case'1':
			cout<<"enter the number to be added"<<endl;
			cin>> num1 >> num2;
			cout<< num1 + num2;

			break;
		case'2':
			cout<<"enter the number to be substracted"<<endl;
			cin>> num1 >> num2;
			cout<< num1 - num2;
			break;
		case'3':
			cout<<"enter the number to be multiplied"<<endl;
			cin>> num1 >> num2;
			cout<< num1*num2;
			break;
		case'4':
			cout<<"enter the number to be divide"<<endl;
			cin>> num1 >> num2;
			if (num2==0)

			{cout<<"value is undefined"<<endl;
			}
			else 
            {cout<< num1 / num2;
			}
			break;
		default:
			cout<<"Error! operator is not correct";
			break;
		}
			cout<<"press y to perform the task again "<<endl;
		cin>> ch ;
	}
	cout<<"terminated"<<endl;
	system("pause");
}