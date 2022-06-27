#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class product
{
    int id;

public:
    int get_id() const;
    void set_id(int new_id);
};

int product::get_id() const
{
    return id;
}

void product::set_id(int new_id)
{
    id = new_id;
}

int main()
{
    const product cp{};

    cout << cp.get_id() << endl;
} 