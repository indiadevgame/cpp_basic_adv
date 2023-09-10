#include <iostream>
using namespace std;


int main(){

int a[4] , min , max , i;

// pass arr values;
for(i=0;  i<4; i++){
    cout<<"Enter numbers :: ";
    cin>>a[i];
  
}


min = a[0];
max = a[0];

for(i=0 ; i<4; i++){
    if(max<a[i]){
        max=a[i];
    };

    if(min>a[i]){
        min=a[i];
    }
    
}

cout<<"min value "<<min<<endl;
cout<<"max value "<<max<<endl;

return 0;
}