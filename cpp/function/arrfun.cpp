#include <iostream>
using namespace std;

void print(int a[], int size)
{
for(int i=0; i<size;i++){
    cout<<a[i]<<",";
}

};

int main(){

int api[5]={12,23,4,45,56};
print(api , 5);

return 0;
}