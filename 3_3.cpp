#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class heavy_class
{
    int m_value;

    mutable int m_cache;
    mutable bool m_cache_valid;

public:
    int generate() const;

    void set(int value);
    int get() const;
};

int heavy_class::generate() const
{
    cout << "とても重いデータ生成関数" << endl;
    return m_value;
}

void heavy_class::set(int value)
{
    cout << "value変更" << endl;
    m_cache_valid = false;
    m_value = value;
}

int heavy_class::get() const
{
    if (m_cache_valid)
    {
        cout << "cache exist" << endl;
        return m_cache;
    }

    cout << "cache don't exist" << endl;
    m_cache = generate();
    m_cache_valid = true;

    return m_cache;
}

int main()
{
    heavy_class heavy_object;

    heavy_object.set(100);

    cout << heavy_object.get() << endl;

    cout << heavy_object.get() << endl;

    heavy_object.set(200);

    cout << heavy_object.get() << endl;

    cout << heavy_object.get() << endl;
} 