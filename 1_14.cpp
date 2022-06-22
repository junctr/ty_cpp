#include <iostream>

int main()
{
    int* ptr = nullptr;

    *ptr = 42;

    std::cout << "after null pointer" << std::endl;
}