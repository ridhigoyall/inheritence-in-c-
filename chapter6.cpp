// Ambiguity Resolution
#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you ?" << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "kaise ho ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;

public:
    void say()
    {
        cout << "Hello guys! How are you? " << endl;
    }
};

int main()
{
    // ambiguity 1
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  Derived d;
    //  d.greet();

    return 0;
}