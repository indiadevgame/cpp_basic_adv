#include <iostream>
using namespace std;

void add(int &);

int main()
{

    int a = 10;

    add(a);

    return 0;
}

void add(int &x)
{   
    int *ptr = &x;
    x = x + 10;
    cout << *ptr;
}