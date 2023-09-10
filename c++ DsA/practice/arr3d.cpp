#include <iostream>
using namespace std;


int main(){

int table , row , col;
cout<<"Enter a table number ";
cin>>table;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"Enter a row number ";
cin>>row;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"Enter a col number ";
cin>>col;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<endl;

int arr[table][row][col];
int sno=0;
int total = table*row*col;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"total numbers of element is "<<total<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;

for (int t = 0; t<table ; t++){
    for (int r =0; r<row;r++){
        for (int c=0; c<col;c++){
            sno++;
            cout<<sno<<" Enter a values :: ";
            cin>>arr[t][r][c];
        }
    }
}
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"==============DATA IS =========================="<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<endl;

for (int t = 0; t<table ; t++){
    for (int r =0; r<row;r++){
        for (int c=0; c<col;c++){
            cout<<"  | "<<arr[t][r][c]<<" | ";
        }
    }
    cout<<endl;
}

cout<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++++++"<<endl;


return 0;
}