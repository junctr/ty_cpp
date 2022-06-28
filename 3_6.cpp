#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class person
{
    string m_name;
    int m_age;

    person(int age);

public:
    person();
    person(string name, int age);

    void set_name(string name);
    void set_age(int age);

    string name() const;
    int age() const;
};

person::person(int age) : m_age(age)
{
    cout << "共通コンストラクター呼び出し" << endl;
}

person::person() : person(-1)
{
    cout << "引数なしコンストラクター呼び出し" << endl;
}

person::person(string name, int age) : person(age)
{
    cout << "引数つきコンストラクター呼び出し" << endl;

    set_name(name);
}

void person::set_name(string name)
{
    m_name = name;
}

void person::set_age(int age)
{
    m_age = age;
}

string person::name() const
{
    return m_name;
}

int person::age() const
{
    return m_age;
}

int main()
{
    cout << "メイン関数スタート" << endl;

    person bob("bob", 20);
    cout << "名前 : " << bob.name() << endl;
    cout << "年齢 : " << bob.age() << endl;

    person alis;
    cout << "名前 : " << alis.name() << endl;
    cout << "年齢 : " << alis.age() << endl;
}