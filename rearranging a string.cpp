#include<iostream>
#include<string>
using namespace std;
void main()
{//cout<< "affan ahmed enrollment 01-131192-002"<<endl;
	string value;
cout<<"a word entered to be arranged in alphabetical order"<<endl;
cin>>value;
for(int i=0;i<value.length();i++)
{char temp=' ';
for (int j= i+1;j<value.length();j++){
if (value[i]>=value[j])
{temp=value[j];//for numeric values simply change temp type to int 
value[j]=value[i];
value[i]=temp;
temp=0;}
}
}
cout <<"arranged word in alphabetical order\n"<<value;
system("pause");
}