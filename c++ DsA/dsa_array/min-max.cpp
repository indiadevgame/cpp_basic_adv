#include <iostream>
using namespace std;


int main(){

int arr[5];
int i, max , min;

for(i=0 ; i<5;i++){
    cout<<"Enter only 5 numbers ::";
    cin>>arr[i];
};

min=arr[0];
max=arr[0];

// check min and max

for (i=0 ; i<5;i++){
    if(min>arr[i]){
    min=arr[i];

}
else if(max < arr[i]){
    max=arr[i];
}
else{
    cout<<"not find"<<endl;
}
}

cout<<"min number is :: "<<min<<endl;
cout<<"max number is :: "<<max<<endl;


return 0;
}