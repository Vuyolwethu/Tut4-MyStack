#include<iostream>
using namespace std;
#include"MyStack.h"
// constructor
int  MyStack(int = 30) // constructor of the stack with 30 elements
{

}

// destructor
~MyStack() // default destructor of the stack with 30 elements 
{

}

// function that pushes an integer value into a stack

template < typename T>
bool MyStack<T>::push(const T &pushValue)
{
	if (!isFull())
	{
		previous[++top] = pushvalue;
		return true;      // returns a true if succefully pushed 
	}
	else

     return false;         // return a false if not succesfully pushed
	cout << "stack is full" << endl;
}
// fuction thats pops off a value from a stack

template < typename T>
bool MyStack<T>::pop(T &popValue)
{
	if (!isEmpty())
	{
		popValue = stackPtr[top--];
		return true;   // returns a true if succesfully popped off
	}

	return false;     // returns a false if the value is not succesfully popped off
}

//A function that checks if the maximum number of emlements have been reached returns a -1 if so

bool isFull(int Size) 
{
	return Size == -1;
}

// this function receives top as argument and overwrite the current value of top with -1 if the stack is empty

bool isEmpty(int top) 
{
	return top == -1;
}

// a fuction that searches for a specific data in a specific position inputed by the user
bool Peek()
{    
	
	int choice;    // argument that one searches for
	if ((choice > b.Empty() && choice < b.isFull))
	{
		cout << "The element is found" << endl;
	}
	else
		cout << "Element is not found" << endl;
}



	



