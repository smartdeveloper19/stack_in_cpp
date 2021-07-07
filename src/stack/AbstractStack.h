#ifndef STACK_ABSTRACTSTACK_H_
#define STACK_ABSTRACTSTACK_H_

class AbstractStack {

public:
	virtual bool push(int data) = 0;
	virtual bool pop(int *data) = 0;
	virtual bool isStackEmpty() = 0;
	virtual bool isStackFull() = 0;
	virtual int getTop() = 0;
	virtual ~AbstractStack();
};

#endif /* STACK_ABSTRACTSTACK_H_ */
