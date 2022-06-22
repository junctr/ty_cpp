#include <iostream>

int main()
{
    int* ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "ptr is nullptr" << std::endl;
    }

    else
    {
        *ptr = 42;
    }
}