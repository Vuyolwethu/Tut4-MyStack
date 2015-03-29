#include<iostream>
using namespace std;
#include"MyStack.h"
template<template T>
/*struct node
{
	int Age;
	struct node *previous;
};
struct node*tail=NULL, *current=NULL
*/
int main()
{
	MyStack b;
	int Size;
	cout << "The following data is pushed into a stack by calling the function Push" << endl;
	cin>>Size;
	b.Push(14);
	b.Push(20);
	b.Push(58)
	b.Push(75)
	while (!b.Empty())
	{
		b.Pop();
	}
	system("pause");
	return 0;
}