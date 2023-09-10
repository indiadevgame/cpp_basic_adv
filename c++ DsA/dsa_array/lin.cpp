#include <iostream>
using namespace std;


int main(){

int arr[5] , i , pos = -1, value;

for (i=0 ; i<5;i++){
    cout<<"Enter a number :: ";
    cin>>arr[i];
};

cout<<"Search the number ::";
cin>>value;

for(i=0; i<5;i++){
    if(value == arr[i]){
        pos = i+1;
        cout<<i<<endl;
        break;
    }
};


if(pos == -1){
    cout<<"the element is "<<value<<" not found"<<endl;

}else{
    cout<<"the element is "<<value<<" position is "<<pos;
}

return 0;
}