#include <iostream>
#include <string.h>
using namespace std;


int main(){
int max=50;

char pass[max]="api";
char con[max];

cout<<"Enter a confirm password ";
gets(con);

int check =strcmp(pass , con);
puts(con);
if(check==0){
    cout<<"right password";
}
else{
    cout<<"password not macth";
}

return 0;
}