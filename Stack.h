#pragma once
class Stack
{

private: 
	int* data; 

	int maxSize;

	int TopIndex; 

public:

	void push(int element);

	int pop();

	int top();

	int count(); 

	Stack();

	Stack(int maxSize);

	~Stack();
};

