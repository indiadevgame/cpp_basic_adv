#include <iostream>
#include <string.h>
using namespace std;


int main(){

int max=50;
char org[max];
char copy[max];

cout<<"Enter a password ";
cin.get(org , max);
strcpy(copy, org );

cout<<"your password is "<<copy;


return 0;
}