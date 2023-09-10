#include <iostream>
using namespace std;

struct add
{
    /* data */
    int num1;
    int num2;
};


int main(){

    add a1 = {10,20};
    cout<<a1.num1<<endl;
    cout<<a1.num2<<endl;

return 0;
}