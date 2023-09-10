#include <iostream>
using namespace std;


int main(){


int i=1;

do{
    cout<<i<<endl;
    i++;
    if(i==6){
        cout<<"hey you are find";
        continue;
        // break;
    }
}while(i<11);

return 0;
}