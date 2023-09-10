#include <D:\cpp\Header\linear\linsrh.h>
#include <iostream>
using namespace std;



int main()
{

    int a[4] , find;
    int size = sizeof(a) / sizeof(a[0]);
   
    for(int i=0; i<size;i++){
        cout<<"enter a value :: ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"search your value ";
    cin>>find;

    linsrh search;
    search.showlin(a ,size ,find);
   

    return 0;
}