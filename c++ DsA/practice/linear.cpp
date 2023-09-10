#include <iostream>
using namespace std;


int main(){

int arr[5] , i, index = -1;

for(int i=0 ; i<5; i++){
    cout<<"enter a number ::";
    cin>>arr[i];
}


for(int i=0 ; i<5; i++){
    
    if(index==arr[i]){
        index = i+1;
    }
}

cout<<index;


return 0;
}