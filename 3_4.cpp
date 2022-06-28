#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::string;

class person
{
    string m_name;
    int m_age;

public:
    person();

    void set_name(string name);
    void set_age(int age);

    string name() const;
    int age() const;
};

person::person() : m_age(-1), m_name("no_name")
{
    cout << "コンストラクター呼び出し" << endl;
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

    person bob;

    cout << "初期化直後の名前 : " << bob.name() << endl;
    cout << "初期化直後の年齢 : " << bob.age() << endl;
    bob.set_name("bob");
    bob.set_age(20);
    cout << "名前 : " << bob.name() << endl;
    cout << "年齢 : " << bob.age() << endl;
}