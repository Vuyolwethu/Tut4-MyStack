#include<iostream>
using namespace std;
#include"MyStack.h";
template<template T>
struct MyStack
{
	int Age;
	struct node *previous;
};

int main()
{
	int Size;
	cout << "what number do you want to push or pop to the stack?" << endl;
	cin>>Size;
	MyStack.Push(int Size);
	MyStack.Pop(int Size);
}