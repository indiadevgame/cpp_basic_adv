#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <
using namespace std;


int main(){

// string name= "sarthak";
// cout<<name.length();
// int val=0;

// while(val<name.length()){
//     char put = name[val];
//     cout<<put;
//     val++;
// }

// string name = "hello cpp";
// cout<<name.find("l");






// string api_name= "ack";
// char ai = 'J';


// while(ai<='Q'){
//     cout<<ai+api_name<<endl;
//     ai++;
// }


// Character classification

// char letter;
// cout<<"Enter a letter ";
// cin>>letter;
// if(isalpha(letter)){
//     cout<<"the character is "<<letter<<" is letter"<<endl;
// }else{
//     cout<<"the character is "<<letter<<" is not letter"<<endl;

// }


string name;
string check;
cout<<"Enter a name ";
cin>>name;

cout<<endl;
cout<<"find a element  ";
cin>>check;



if(name.find(check)==true){
    cout<<"hai"<<endl;
}else{
    cout<<"nahi hai"<<endl;
}

return 0;

}
