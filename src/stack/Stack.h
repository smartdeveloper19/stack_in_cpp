#ifndef STACK_STACK_H_
#define STACK_STACK_H_

#include "AbstractStack.h"

#define STACK_SIZE 5
class Stack: public AbstractStack {

private:
	int buffer[STACK_SIZE];
	int topPosition;
public:
	Stack();
	bool push(int data);
	bool pop(int *data);
	bool isStackEmpty();
	bool isStackFull();
	int getTop();
	~Stack();
};

#endif /* STACK_STACK_H_ */
