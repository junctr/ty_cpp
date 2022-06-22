#include <iostream>

using std::cout;
using std::endl;

struct product
{
    int id;
    int price;
    int stock;
};

void show_product(product my_product)
{
    cout << "id: " << my_product.id << endl;
    cout << "price: " << my_product.price << endl;
    cout << "stock: " << my_product.stock << endl;
}

int main()
{
    product pen =
    {
        0,
        100,
        200,
    };

    show_product(pen);
}