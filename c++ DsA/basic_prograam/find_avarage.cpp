// using gog statment

#include <iostream>
using namespace std;


int main(){


float num , avrage , sum=0.0;

int  i , n;

cout<<"enter maximun runtime number ";
cin >>n;

for (i=1; i<=n;i++){
    cout<<"Enter number"<<i<<" ";
    cin>>num;
    if (num<0.0){
        goto ave;
    }
    sum+=num;
}

ave:
avrage= sum/(i-1);
cout<<"average "<<avrage;

return 0;
}