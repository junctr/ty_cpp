#include <iostream>

using std::cout;
using std::endl;

union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u;

    cout << "address of u.a : " << &u.a << endl;
    cout << "address of u.b : " << &u.b << endl;
    cout << "address of u.c : " << &u.c << endl;
} 