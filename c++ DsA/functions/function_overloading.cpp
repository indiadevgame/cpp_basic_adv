#include <iostream>
using namespace std;

// function overloading

// void hey(int a){
//     cout<<"hello number "<<a;
// };

// void hey(string a){
//     cout<<"this is string value "<<a;
// };

// void hey(int a, string b){
//     cout<<"this is number "<<a<<" this is string value "<<b;
// };
// void hey(string b,int a){
//     cout<<"this is string value "<<b<<" this is number "<<a;
// }


// make a function for make reactage box and inside the function some parameter are here have where , color , x , y, width_size , height_size 


void rect(string where, string color , int x, int y , int size ){
    cout<<"where "<<where<<endl;
    cout <<"color is "<<color<<endl;
    cout<<"x position is "<<x<<endl;
    cout<<"y position is "<<y<<endl;
    cout<<"size is "<<size<<endl;

};


void rect(string where, string color , int x, int y , int w_size , int h_size ){
    cout<<"where "<<where<<endl;
    cout <<"color is "<<color<<endl;
    cout<<"x position is "<<x<<endl;
    cout<<"y position is "<<y<<endl;
    cout<<" width_size is "<<w_size<<endl;
    cout<<" height_size is "<<h_size<<endl;
};




int main(){
string window= "window";
string black_color = "black";
string white_color = "white";
string red_color = "red";



rect(window , red_color, 34 ,45, 400);

return 0;
}