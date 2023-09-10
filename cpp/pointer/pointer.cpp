#include <iostream>
using namespace std;


int main(){

int a=10;
int *p1 , *p2 , *p3;
p1 = &a;
p2 = &a;
p3 = &a;

cout<<*p1<<endl;
cout<<*p2<<endl;
cout<<*p3<<endl;

*p2 = 50;
cout<<*p1<<endl;
cout<<*p2<<endl;
cout<<*p3<<endl;

*p3 = *p1**p2+*p1-*p2**p1;

cout<<*p1<<endl;
cout<<*p2<<endl;
cout<<*p3<<endl;

return 0;
}