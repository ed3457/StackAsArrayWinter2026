#include "Stack.h"

void Stack::push(int element)
{   
	if (TopIndex + 1 == maxSize)
		throw 1; // overflow 
	
	data[++TopIndex] = element; 

}

int Stack::pop()
{
	if (TopIndex == -1)
		throw 2;// underflow 

	return data[TopIndex--];
}

int Stack::top()
{
	if (TopIndex == -1)
		throw 2;// underflow 


	return data[TopIndex];

}

int Stack::count()
{
	return TopIndex+1;
}

Stack::Stack():Stack(10)
{

}

Stack::Stack(int maxSize)
{
	this->maxSize = maxSize;

	TopIndex = -1;

	data = new int[maxSize]; 
}

Stack::~Stack()
{
	delete[] data; 
}
