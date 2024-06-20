#ifndef MYCLASS_HPP
#define MYCLASS_HPP

class MyClass {
private:
    int privateFunction(int a, int b);

    friend class MyClassTest_FriendPrivateFunction_Test;  // Grant access to the test case
};

#endif // MYCLASS_HPP
