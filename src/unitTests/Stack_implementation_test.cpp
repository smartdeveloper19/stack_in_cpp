#ifdef UNIT_TESTING

#include "Stack.h"
#include "gtest.h"

TEST(test_stack_implementation, test_push_pop_from_stack)
{
	int topValue = 0;
	Stack stackObj;

	for (int i = 0; i < STACK_SIZE; i++)
	{
		ASSERT_TRUE(stackObj.push(1 + i));
	}
	ASSERT_TRUE(stackObj.isStackFull());

	ASSERT_FALSE(stackObj.push(10)); // should not add to stack
	ASSERT_TRUE(stackObj.pop(&topValue));

	ASSERT_EQ(5, topValue);
	ASSERT_TRUE(stackObj.pop(&topValue));
	ASSERT_EQ(4, topValue);

	ASSERT_EQ(3, stackObj.getTop()); // now top should be 3

	ASSERT_FALSE(stackObj.isStackEmpty());

	ASSERT_TRUE(stackObj.pop(&topValue));
	ASSERT_TRUE(stackObj.pop(&topValue));
	ASSERT_TRUE(stackObj.pop(&topValue));

	ASSERT_TRUE(stackObj.isStackEmpty());
}

TEST(test_stack_implementation, test_push_pop_all_from_stack)
{

}

#endif

