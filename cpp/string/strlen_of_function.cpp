#include <iostream>
#include <string.h>
using namespace std;

void s_size(char str[50]){
    int len = strlen(str);
    cout<<str<<endl;
    cout<<"string length : "<<len<<endl;
};

int main(){

s_size("sarthak");

return 0;
}