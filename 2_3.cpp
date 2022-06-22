#include <iostream>

using std::cout;
using std::endl;

struct S
{
    int a;
    int b;
    int c;
};

int main()
{
    S s;

    cout << "address of s.a : " << &s.a << endl;
    cout << "address of s.b : " << &s.b << endl;
    cout << "address of s.c : " << &s.c << endl;
} 