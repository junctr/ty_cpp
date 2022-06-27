#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class product
{
    int id;

public:
    int get_id() const;
    //int get_id();

    void set_id(int new_id);
};

int product::get_id() const
{
    cout << "constメンバー関数のget_id()が呼ばれました" << endl;
    return id;
}
/*
int product::get_id()
{
    cout << "非constメンバー関数のget_id()が呼ばれました" << endl;
    return id;
}
*/
void product::set_id(int new_id)
{
    id = new_id;
}

int main()
{
    const product cp{};

    cout << cp.get_id() << endl;

    product p;

    cout << p.get_id() << endl;
} 