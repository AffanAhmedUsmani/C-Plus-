#include <iostream>

using namespace std;

int main()
{  cout<<"to show which value is the greatest ";
int a  ;
cin >> a;
int b  ;
cin >> b;
int c  ;
cin>> c;
int d ;
cin >>d ;
if ( a > b && a > c && a > d )
{ 
	cout <<  " a is the greatest value" <<endl;
	if ( b > c && b > d)
{cout << "b is greater than c and d but less than a"<<endl;
	if (c > d )
	{ 
		cout << "c is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "c is the third greater no and d is the smallest"<<endl;}
	}
	else if ( c > b && c > d)
{cout << "c is greater than b and d but less than a"<<endl;
if (b > d )
	{ 
		cout << "b is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "d is the third greater no and b is the smallest"<<endl;}
}
else if ( d > b && d > c)
{
	cout << "d is greater than b and c but less than a"<<endl;
if (b > c )
	{ 
		cout << "b is the third greater no and c is the smallest"<<endl;
	
}
	else 
	{
		cout << "c is the third greater no and b is the smallest"<<endl;}
}

}
else if ( b > a && b > c && b > d )
{ 
	cout <<  " b is the greatest value" <<endl;
	if ( a > c && a > d)
{cout << "a is greater than c and d but less than b"<<endl;
	if (c > d )
	{ 
		cout << "c is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "c is the third greater no and d is the smallest"<<endl;}
	}
else if ( c > a && c > d)
{cout << "c is greater than b and d but less than b"<<endl;
if (a > d )
	{ 
		cout << "a is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "d is the third greater no and a is the smallest"<<endl;}
}
else if (  d> a && d > c)
{
	cout << "d is greater than a and c but less than b"<<endl;
if ( a > c )
	{ 
		cout << "a is the third greater no and c is the smallest"<<endl;
	}
	else 
	{
		cout << "c is the third greater no and a is the smallest"<<endl;}
}
}
else if ( c > a && c > b && c > d )
{ 
	cout <<  " c is the greatest value" <<endl;
	if ( a > b && a > d)
{cout << "a is greater than b and d but less than c"<<endl;
	if ( b > d )
	{ 
		cout << "b is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "d is the third greater no and b is the smallest"<<endl;}
	}
else if ( b > a && b > d)
{cout << "b is greater than a and d but less than c"<<endl;
if (a > d )
	{ 
		cout << "a is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "d is the third greater no and a is the smallest"<<endl;}
}
else if (  d > a && d > b)
{
	cout << "d is greater than a and b but less than c"<<endl;
if ( a > b )
	{ 
		cout << "a is the third greater no and b is the smallest"<<endl;
	}
	else 
	{
		cout << "b is the third greater no and a is the smallest"<<endl;}
}

}
else  
{ 
	cout <<  " d is the greatest value" <<endl;
	if ( a > b && a > c)
{cout << "a is greater than b and c but less than d"<<endl;
	if ( b > c )
	{ 
		cout << "b is the third greater no and d is the smallest"<<endl;
	}
	else 
	{
		cout << "d is the third greater no and b is the smallest"<<endl;}
	}
else if ( b > a && b > c)
{cout << "b is greater than a and c but less than d"<<endl;
if (a > c )
	{ 
		cout << "a is the third greater no and c is the smallest"<<endl;
	}
	else 
	{
		cout << "c is the third greater no and a is the smallest"<<endl;
}
}
else if (  c > a && c > b)
{
	cout << "c is greater than a and b but less than d"<<endl;
if ( a > b )
	{ 
		cout << "a is the third greater no and b is the smallest"<<endl;
	}
	else 
	{
		cout << "b is the third greater no and a is the smallest"<<endl;}
}
system ("pause");
}  
}

