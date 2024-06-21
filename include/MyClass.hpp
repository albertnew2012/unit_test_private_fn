#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class MyClass {
private:
    int privateFunction_add(int a, int b);
    int privateFunction_mul(int a, int b);

    // Friend declarations for specific test cases
    friend class MyClassTest_FriendPrivateFunction1_Test;
    friend class MyClassTest_FriendPrivateFunction2_Test;
};

#endif // MYCLASS_HPP
