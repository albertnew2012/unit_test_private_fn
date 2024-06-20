
# Unit Test for Private Class Functions

This project is a simple C++ class example with associated tests for private class functions using GoogleTest.

## Project Structure

```
MyClassProject/
│
├── include/
│   └── MyClass.hpp
│
├── src/
│   └── MyClass.cpp
│
├── test/
│   └── MyClassTest.cpp
│
├── CMakeLists.txt
│
└── README.md
```

## Files

- **MyClass.hpp**: Header file containing the declaration of the `MyClass` class.
- **MyClass.cpp**: Source file containing the implementation of the `MyClass` class.
- **MyClassTest.cpp**: Test file containing unit tests for the `MyClass` class using GoogleTest.
- **CMakeLists.txt**: CMake configuration file for building the project and running tests.

## Requirements

- CMake 3.10 or higher
- C++14 compatible compiler
- GoogleTest

## Building the Project

1. Clone the repository:
    ```bash
    git clone https://github.com/albertnew2012/unit_test_private_fn.git
    cd MyClassProject
    ```

2. Create a build directory and navigate into it:
    ```bash
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```bash
    cmake ..
    ```

4. Build the project:
    ```bash
    make
    ```

## Running Tests

After building the project, you can run the tests using CTest:

```bash
ctest
```

## MyClass Overview

`MyClass` is a simple class defined in `MyClass.hpp` and implemented in `MyClass.cpp`. The functionality and usage of the class are demonstrated through unit tests in `MyClassTest.cpp`.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.