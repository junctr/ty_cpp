#include <iostream>

int main()
{
    float f = -1234.5678f;

    std::cout << f << std::endl;

    int i = f;

    std::cout << i << std::endl;

    unsigned int u = i;

    std::cout << u << std::endl;

    unsigned short s = u;

    std::cout << s << std::endl;

    u = s;

    std::cout << u << std::endl;

    f = u;

    std::cout << f << std::endl;

    char c = 98;

    std::cout << c << std::endl;

    std::cout << static_cast<int>(c) << std::endl;
}