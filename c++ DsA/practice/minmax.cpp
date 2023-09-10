#include <iostream>
using namespace std;


int main(){
int arr[5],i, max , min ;

for (i=0; i<5;i++){
    cout<<"Enter a number :: ";
    cin>>arr[i];

}

min = arr[0];
max = arr[0];

for(i=0 ; i<5;i++){
    if(min > arr[i]){
        min = arr[i];
    }
    
    if(max < arr[i]){
        max = arr[i];
    }

};

cout<<"min value is "<<min<<endl;
cout<<"max value is "<<max<<endl;

return 0;
}