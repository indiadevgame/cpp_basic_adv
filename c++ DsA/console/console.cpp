#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main(){
char cmd[50];
int run;
int i=0;
cout<<"enter your run time";
cin>>run;

while(i<run){

cout<<"Enter your cammand ";
cin.get(cmd , 50);
cout<<"your cammand "<<cmd;

system(cmd);
i++;

}

return 0;
}