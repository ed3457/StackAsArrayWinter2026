#pragma once
class Stack
{

private: 
	char* data; 

	int maxSize;

	int TopIndex; 

public:

	void push(char element);

	char pop();

	char top();

	int count(); 

	Stack();

	Stack(int maxSize);

	~Stack();
};

