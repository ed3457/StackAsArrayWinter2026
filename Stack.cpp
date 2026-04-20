#include "Stack.h"

Stack::Stack():Stack(10)
{

}

Stack::Stack(int maxSize)
{
	this->maxSize = maxSize;

	TopIndex = -1;

	data = new int[maxSize]; 
}
