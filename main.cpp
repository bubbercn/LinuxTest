#include <iostream>
#include <limits>
using namespace std;

void f(int x, int y)
{
    if (x < 0)
        x = 0;
    if (y < 0)
        y = 0;
    int z = x + y;
    if (z < 0)
    {
        z = 0;
    }
    cout << z << endl;
}

int main(int, char **)
{
    f(numeric_limits<int>::max(), 1);
}

