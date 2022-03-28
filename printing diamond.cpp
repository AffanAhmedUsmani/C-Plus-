#include <iostream>
using namespace std;
void main()
{
	
	for(int i=9,k=10 ;i>0;i--,k++)
{
	for(int j=i ; j>0 ; j--)
	{ cout<<" ";
	}
	int result;
	result=k-i;
	  for (int l=0;l<result;l++)
        {
            cout << "*";
			}
	  cout<<endl;}
		for(int m=9,n=1;m>0;m--,n++)
{ 
	for(int o=1 ; o<n ; o++)
	{
	cout <<" ";}
		 for(int p = m*2; p>=1;p--)
		{cout<<"*";
		 }
	cout <<endl;
		}
		
	system ("pause");
}