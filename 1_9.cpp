#include <iostream>
int main()
{
    int a = 3;
    switch (a + 1)
    {
        case 1:
            std::cout << "a+1=1" << std::endl;
            break;
        
        case 2:
            std::cout << "a+1=2" << std::endl;
            break;
        
        default:
            std::cout << "not a+1=1,2,3" << std::endl;
            break;
        
        case 3:
            std::cout << "a+1=3" << std::endl;
            break;
    }
}