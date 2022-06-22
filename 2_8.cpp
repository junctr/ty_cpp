#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int value = 42;

    cout << "valueのアドレス : " << &value << endl;
    cout << "valueの値 : " << value << endl;

    int& reference = value;

    cout << "referenceのアドレス : " << &reference << endl;
    cout << "referenceの値 : " << reference << endl;

    reference = 0;

    cout << "valueのアドレス : " << &value << endl;
    cout << "valueの値 : " << value << endl;

    value = 95;

    cout << "referenceのアドレス : " << &reference << endl;
    cout << "referenceの値 : " << reference << endl;

} 