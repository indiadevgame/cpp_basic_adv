#include <iostream>
using namespace std;

// struct api
// {
//     /* data */
//     int id;
//     string name;
//     int price;
//     int status = 0;
// };

struct call
{
    /* data */
    int num;
};

int main()
{

    call c[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter number ::";
        cin >> c[i].num;
    }

    for (i = 0; i < 5; i++)
    {
        cout << c[i].num << endl;
    }

    int val = c[5].num;
    int *ptr = &val;
    cout << "++++++++++++" << endl;
    cout << ptr;

    return 0;
}