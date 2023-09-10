#include <iostream>
using namespace std;


int main(){

int arr[5] , i , sum;

for (i=0 ; i<5; i++){
    cout<<"Enter a number ";
    cin>>arr[i];
}

sum =0;

for (i=0 ; i<5; i++){
    sum= sum+arr[i];
}

cout<<"sum "<<sum;


return 0;

}