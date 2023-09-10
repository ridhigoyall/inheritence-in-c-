// initilisation of constructors
#include <iostream>
using namespace std;

class Test
{
private:
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(b + i)//error:garbage value
    {
        cout << "a = " << a << " ,  b = " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}