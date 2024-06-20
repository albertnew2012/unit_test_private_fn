#include <iostream>
#include "MyClass.hpp"

int main() {
    MyClass myClass;
    int result = myClass.privateFunction(5, 3);
    std::cout << "The result of 5 + 3 is: " << result << std::endl;
    return 0;
}
