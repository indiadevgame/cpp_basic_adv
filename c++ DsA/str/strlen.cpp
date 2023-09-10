#include <iostream>
#include <string.h>
using namespace std;


int main(){

int max = 50;
char str[max];
cout<<"Enter a word ";
cin.get(str , max);
int length = strlen(str) ;
cout<<"your word length is "<<length<<endl;
return 0;
}