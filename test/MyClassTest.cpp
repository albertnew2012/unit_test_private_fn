#include <gtest/gtest.h>
#include <MyClass.hpp>

class MyClassTest : public ::testing::Test {
protected:
    MyClass myClassInstance;
};

// Declare the test case as a friend of MyClass
TEST_F(MyClassTest, FriendPrivateFunction1) {
    ASSERT_EQ(myClassInstance.privateFunction_add(2, 3), 5);
}

TEST_F(MyClassTest, FriendPrivateFunction2) {
    ASSERT_EQ(myClassInstance.privateFunction_mul(2, 3), 6);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
