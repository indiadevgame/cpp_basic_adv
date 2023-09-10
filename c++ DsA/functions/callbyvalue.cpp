#include <iostream>
using namespace std;


// call by value

void sum(int);

// call by reference

// void sum(int&);

int main(){

int a=10;
sum(a);
cout<<"a => "<<a<<endl;

return 0;
}

// void sum(int &x){
//     x = x+x+x;
//     cout<<"x => "<<x<<endl;
// }

void sum(int x){
    x= x+x+x;
    cout<<"x => "<<x<<endl;
}

