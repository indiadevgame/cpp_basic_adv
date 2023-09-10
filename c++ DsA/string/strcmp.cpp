#include <iostream>
#include <string.h>
using namespace std;


string  verify(){
    int max=50;
    string msg , error;
    char pass[max];
    char check[max];
    cout<<"Enter a password";
    cin>>pass;
    cout<<"confirm your password ";
    cin>>check;
    int checking = strcmp(pass  , check);
    int length_org =strlen(pass);
    int length_con =strlen(check);
    if(checking==0){
        msg="Correct password ! goto ";
        
        cout<<endl;
        cout<<"password length is "<<length_org<<endl;
        cout<<"confirm password length is "<<length_con<<endl;
        return msg;
    }
    else{
        error="password id do not match pls leave the ship";
        cout<<endl;
        cout<<"password length is "<<length_org<<endl;
        cout<<"confirm password length is "<<length_con<<endl;
        return error;
    }
    
};


int main(){


string password_check= verify();
cout<<password_check;

return 0;
}



// char org[max];
// char cmpr[max];

// cout<<"set a password ";
// cin>>(org);

// cout<<"enter preveus password ";
// cin>>cmpr;

// int verify = strcmp(org , cmpr);
// if(verify==0){
//     cout<<"Correct password !";
// }
// else{
//     cout<<"Wroung password !";
// }

// char pass[max] = "npm" , cpass[max];

// cout<<"Enter your pass ";
// cin.get(cpass , max);

// int cmp = strcmp(pass , cpass);
// cout<<cmp<<endl;
// if(cmp==0){
//     cout<<"Correct password !";
// }
// else{
//     cout<<"worung pass ";
// }



