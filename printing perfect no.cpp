#include <iostream>
using namespace std;
int main()
{
	char type = 'y';
	while (type == 'y' || type == 'y')
	{
cout << "enter number till perfect no are to be found";
int n;
/* number till which perfect no are to be found*/
cin >>n;
int out=0;
for(int i=1;i<n;i++)

{   
	int result=0;
result = n%i;
if (result == 0)
{  if (i == n)
       {}

else

{
 out = out+i;

}

}

}
if (out==n)
	cout<<"this is a perfect no ="<<out<<endl;

}

	cout << "to convert another value press y else any other" << endl;
		cin >> type;

system ("pause");
}
