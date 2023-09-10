#include <iostream>
#include <string.h>
using namespace std;


int main(){
int max =50;
// char word[]="www.gurukripagreen.co.in";
// char str2[max];
// strcpy(str2 , word);
// cout<<"orignal "<<word<<endl;
// cout<<endl;
// cout<<"copy "<<str2<<endl;

char org[max];
char copy[max];

cin>>org;

strcpy(copy , org);
cout<<"orignal "<<org<<endl;
cout<<"copy "<<copy<<endl;


return 0;
}