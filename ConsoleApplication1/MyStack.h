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
	bool Push(const T&);
	bool Pop(T&);
	bool Peek();
	bool isFull();
	bool isEmpty();
	void Print();

};
// constructor template 
template < typename T>
MyStack <T> ::MyStack(int s) :size(s>0 ? s : 30), top(-1), previous(new T[Size])
{
}
#endif

