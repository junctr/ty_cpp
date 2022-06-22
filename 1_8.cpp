#include <iostream>

void show_message(int value)
{
    if (10 <= value && value < 20)
    {
        std::cout << "10 <= value < 20" << std::endl;
    }
    
    else
    {
        std::cout << "not 10 <= value < 20" << std::endl;
    }
}

int main()
{
    show_message(9);
    show_message(15);
    show_message(20);
}