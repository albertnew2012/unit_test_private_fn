#include <gtest/gtest.h>
#include <MyClass.hpp>

class MyClassTest : public ::testing::Test {
protected:
    MyClass myClass;
};

// Declare the test case as a friend of MyClass
TEST_F(MyClassTest, FriendPrivateFunction) {
    ASSERT_EQ(myClass.privateFunction(2, 3), 5);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
