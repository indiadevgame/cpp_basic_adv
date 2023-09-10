#include <iostream>
using namespace std;


int main(){

int arr[] ={23,34,45,56};
int size = sizeof(arr) / sizeof(arr[0]);
int i, max , min;

for (i=0 ; i<size;i++){
    arr[i];
}

min = arr[0];
max = arr[0];

for (i=0 ; i<size;i++){
    if(min>arr[i]){
        min=arr[i];
    }
    if(max<arr[i]){
        max=arr[i];
    }
};

cout<<"min "<<min<<endl;
cout<<"max "<<max<<endl;




return 0;
}