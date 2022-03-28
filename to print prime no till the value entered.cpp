#include <iostream>
using namespace std;
int main ()
{cout << "Name affan ahmed"<<endl;
	cout << "enrollment :01-131192-002" << endl;

	int n ;
/* the value which i entered into the coputer for processing */ 
cout<<"enter the value till which prime numbers are to be found"<<endl;
/*displayed message to user*/
cin >> n;
/*enter the value of n which is the number till which prime are to be displayed*/


for (int i = 1 ; i <= n ; i++)
/* in this initail value of the newly declared variable i is declared as 1 and second is condition so the body of 
this for will be executed in loop till i is less than  or equal to the number enetered third is enhancment
this will increase value of i in every next cycle by one */ 
{if(i==2 || i==3 || i==5 || i == 7)
/* i have declare some prime no already as a condition if these are = i 
 which would help me when finding out prime no at a 
huge number range*/
{cout<<i<<"is a prime no"<<endl;
}
    else if (i%2==0 || i % 3==0 || i % 5== 0 || i % 7==0)
  /* here i have make up a condition as a prime no is only divisible by itself and 1 so most numbers
   which are divisible by the most common divisor 2, 3, 5 and 7 will be wasted on there own while loop
   will be running to execute the for statement again and again*/
    {

    }

else
/* the remaining numbers will only be those which would be divisible by 1 or themselves and that are
 what i need*/  
 {cout << i <<"is a prime no"<<endl;
 }
}
system ("pause");
}