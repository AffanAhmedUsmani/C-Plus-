#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void main()
{
cout<<"Name Zain Enrollment 01-131192-037"<<endl;
/*	char del;
	string enter;
	int a;
	cout<<"enter a sentence or a word"<<endl;
getline(cin,enter);
a=enter.length();
cout<<"the line you entered was \n"<<enter<<endl;
cout<<"\n press the letter to be deleted from string"<<endl;
cin>>del;

for (int i =0 ;i<a;i++)
{
	if (enter[i]==del)
{
	continue;
	
	}
	cout<<enter[i];
}
cout <<"\n the line that is result"<<endl;
	/*char type = 'Y';
	while (type == 'y' || type == 'Y')
	{*/
		string str, str1, reverse;
		int count = 0, count1 = 0,uppercase=0,lowercase=0,number=0,spaces=0;
	/*	cout<<"to sort characters in ascending order in array"<<endl;
		cout<<"enter the word to be alphabetically arranged"<<endl;
	getline(cin,str);
	
		/*char pol;
		cout << "enter chracter to be deleted" << endl;
		cin >> pol;
		for (int j = str.length() - 1; j >= 0; j--)
		{
			reverse += str[j];

		}
		cout << "\n this is  the reverse of what you have typed \n"<<reverse << endl;
		cout << "this was the original text \n"<< str<<endl;
		if (str == reverse)
		{
			cout << "this is a plaindrome " << endl;
		}/**/
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
				str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			{
				cout << str[i] << "this is vowel in this line" << endl;
				count1++;
			}
			else if(str[i]==' '||str[i] >='0' && str[i] <='9')
			{continue;}
			else
			{
				cout << str[i] << "this is consonant" << endl;
			}
			str1 += str[i];
			count++;
		}
		for (int i=0;i<str.length();i++)
		{
			if(str[i] >='A' && str[i]<='Z')
		{uppercase++;} 
		else if(str[i] >='a' && str[i]<='z')
		{lowercase++;}
		else if(str[i] ==' ')
		{spaces++;}
		else if(str[i] >='0' && str[i] <='9')
		{ number++; }
}
		int h;
		h = count - count1;
		cout << h << "number of consonents" << endl;
		cout << "number of vowel  " << count1 << endl;
		cout << "length of the string is  " << count;
		cout<<"\n upper case no || lower case no  || numbers no ||special charecter no || spaces "<<endl;       
	cout<<uppercase<<"           ||            "<<lowercase<<"           ||            "<<number<<"           ||            "<<spaces<<endl;
		//	cout << endl << str1;
		/*cout << "printing out pattern" << endl;
	int x[5],y[5];
	cout << "enter values of x and y " << endl;
	for (int i = 0; i < 5; i++)
	{
	cout << "enter x and y "
	<< endl;
	cin >> x[i];
	cin >> y[i];
	}
	for (int i = 0; i < 5;i++)
	{
	int sum = 0;
	sum = x[i] + y[i];
	int product = 0;
	product = x[i] * y[i];
	cout << i << "     ||       "<< x[i] << "       ||         " << y[i] << "        ||         " << sum << "          ||       " << product << endl;
	}
		cout << "enter y to perform again" << endl;
		cin >> type;
	}*/
	system("pause");
}