#include <iostream>
using namespace std;


int main(){

int val , i , pos =-1 , search;

// enter range of array values
cout<<"Enter range of arrray valus :: ";
cin>>val;

// put value in array 
int arr[val];

for(i=0 ; i<val;i++){
    cout<<"Enter array value ::";
    cin>>arr[i];
}
// showing array values
cout<<" :: array data is ::"<<endl; 
for( i=0; i<val;i++){
    cout<<"  "<<arr[i]<<"  "<<endl;
}

// search position of array values 
cout<<" :: search position of values :: "<<endl;
cout<<"search here ";
cin>>search;
for(i=0; i<val;i++){
    if(search==arr[i]){
        pos = i+1;
        break;
    }
}

// show search values 
if(pos == -1){
    cout<<"value not find"<<endl;
}else{
    cout<<": : your search data result is ::"<<endl;
    cout<<": : value position number is ::"<<pos<<endl;
    cout<<": : search value is ::"<<arr[pos-1]<<endl;

}

return 0;
}