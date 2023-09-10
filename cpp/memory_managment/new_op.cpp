#include <iostream>
using namespace std;


int main(){

int *p;
int val=30;
p = new int(val);
cout<<*p;
delete p;

return 0;
}