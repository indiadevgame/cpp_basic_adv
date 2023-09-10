#include <iostream>
#include <string.h>
using namespace std;


int main(){

int max=50;

char word[max];
cout<<"enter a word ";
cin.get(word ,max);
int length = strlen(word);

cout<<"your word length is "<<length;


return 0;
}