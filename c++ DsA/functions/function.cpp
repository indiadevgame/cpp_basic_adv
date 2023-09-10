#include <iostream>
using namespace std;

// funciton in cpp

void a(){
    cout<<"hello my dear function"<<endl;
};

void add(){
    int a,b;
    cout<<"enter 1 number => ";
    cin>>a;
    cout<<"enter 2 number => ";
    cin>>b;
    cout<<a+b<<endl;
}

// take a paramenter
// void sum(int a , int b){
//     int add = a+b;
//     cout<<add;
// }

int sum(int a , int b){
    int add = a+b;
    cout<<add;
};




int ret(int a){
    int b = a;
    return b;
};

int main(){



return 0;
}