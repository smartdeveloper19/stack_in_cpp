#include <string.h>
#include "Stack.h"

Stack::Stack()
{
	memset(buffer, 0 , sizeof(buffer));
	topPosition = 0;
}

bool Stack::push(int data) {

	if (isStackFull())
	{
		return false;
	}

	buffer[++topPosition] = data;

	return true;
}

bool Stack::pop(int *data) {

	if (isStackEmpty())
	{
		return false;
	}

	*data = buffer[topPosition];
	topPosition--;

	return true;
}

bool Stack::isStackEmpty() {

	return (topPosition == 0);
}

bool Stack::isStackFull() {

	return (topPosition >= STACK_SIZE);
}

int Stack::getTop(){

	return buffer[topPosition];
}

Stack::~Stack() {

}

