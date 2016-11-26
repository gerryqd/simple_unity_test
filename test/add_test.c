#include "unity.h"
#include "unity_fixture.h"

#include "add.h"

// 'TEST_GROUP', 'TEST_SETUP' and 'TEST_TEAR_DOWN' are all required
TEST_GROUP(add);
TEST_SETUP(add)
{
    // 
}

TEST_TEAR_DOWN(add)
{
    //
}

TEST(add, simple)
{
    TEST_ASSERT_EQUAL(3, add(1, 2));
}
