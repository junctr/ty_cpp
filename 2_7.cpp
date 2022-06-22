#include <iostream>

using std::cout;
using std::endl;

class product
{
    int id;
    int price;
    int stock;

public:
    int get_id();
    void set_id(int new_id);

    int get_price();
    void set_price(int new_price);

    int get_stock();
    void set_stock(int new_stock);
};

int product::get_id()
{
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int product::get_price()
{
    return price;
}

void product::set_price(int new_price)
{
    if (new_price < 0)
    {
        cout << "エラー : 単価は0以上にしてください" << endl;
        return;
    }
    price = new_price;
}

int product::get_stock()
{
    return stock;
}

void product::set_stock(int new_stock)
{
    if (new_stock < 0)
    {
        cout << "エラー : 在庫数は0以上にしてください" << endl;
        return;
    }
    stock = new_stock;
}

int main()
{
    product pen;

    pen.set_id(0);
    pen.set_price(100);
    pen.set_stock(200);

    product* ptr = &pen;

    cout << "商品ID : " << ptr->get_id() << endl;
    cout << "単価 : " << ptr->get_price() << endl;
    cout << "在庫数 : " << ptr->get_stock() << endl;
} 