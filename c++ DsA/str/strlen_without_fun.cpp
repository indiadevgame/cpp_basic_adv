#include <iostream>
#include <string.h>
using namespace std;


int main(){

char str[50];
int i , len;
cout<<"enter a string :: ";
gets(str);

for(i=0; str[i]!= '\0' ;i++);
len=i;
cout<<"string length is "<<len<<endl;

return 0;
}