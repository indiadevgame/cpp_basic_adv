#include <iostream>
#include <string.h>
using namespace std;


int main(){

int max = 50;
char str[max];
cout<<"Enter a string value ::";
cin.get(str , max);
int s_size = strlen(str);
cout<<"your string value ::"<<str<<endl;
cout<<"your string lenght is :: "<<s_size;

return 0;
}