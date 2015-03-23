#ifndef MyStack_H
#define MyStack_H
template<typename T>
class MyStack
{
private:
	int Size;
	int top;
public:
	MyStack();
	~MyStack();
	bool Push(int);
	bool Pop(int);
	bool Peek();
	bool isFull();
	bool isEmpty();
	void Print();

};
#endif

