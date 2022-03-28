#include <iostream>

using namespace std;

int head = -1;
int stack[10];

void InitializeStack()
{
	for (int i = 0; i < 10; i++)
	{
		stack[i] = -1;
	}
}

void Push(int element)
{
	if ((head + 1) == 10)
	{
		cout << "Stack is full";
		return;
	}

	stack[++head] = element;
}

int Pop()
{
	if (head == -1)
	{
		cout << "Stack is empty";
		return -1;
	}

	return stack[head--];
}

void main()
{
	InitializeStack();

	Push(10);
	Push(20);
	Push(30);
	Push(40);

	cout << Pop() << endl;
	cout << Pop() << endl;
	cout << Pop() << endl;
	cout << Pop() << endl;
	cout << Pop() << endl;
}