#include <iostream>
#include <string.h>
using namespace std;


int main(){

int max = 50;
char str[max];
cout<<"Enter a pass ::";
cin.get(str , max);
int s_size = strlen(str);

if(s_size<=8){
    cout<<"your password value ::"<<str<<endl;
    cout<<"your password lenght is :: "<<s_size<<endl;
}else{
    cout<<"password length must be 8 "<<endl;
}

return 0;
}