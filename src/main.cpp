#include <iostream>
#include "MyClass.hpp"

int main() {
    MyClass myClass;
    // This is gonna cause compilation error
    int result = myClass.privateFunction_add(5, 3);
    std::cout << "The result of 5 + 3 is: " << result << std::endl;
    return 0;
}
