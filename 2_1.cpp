#include <iostream>

using std::cout;
using std::endl;

struct product
{
    int id;
    int price;
    int stock;
};

int main()
{
    product pen;

    pen.id = 0;
    pen.price = 100;
    pen.stock = 200;

    product* ptr = &pen;

    cout << "id:" << ptr->id << endl;
    cout << "price:" << ptr->price << endl;
    cout << "stock:" << ptr->stock << endl;

    cout << "id:" << pen.id << endl;
    cout << "price:" << pen.price << endl;
    cout << "stock:" << pen.stock << endl;
}