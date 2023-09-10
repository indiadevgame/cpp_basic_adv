// #include <iostream>
// using namespace std;


// int main(){

// // int n;
// // cout<<"Enter a number ";
// // cin>>n;

// // if (n>=0){
// //     cout<<"goto the statment "<<endl;
// //     goto here;
// // }
// // here:
// //     cout<<"you number is greater the 0"<<endl;

// float num, average, sum = 0.0;
//     int i, n;

//     cout << "Maximum number of inputs: ";
//     cin >> n;

//     for(i = 1; i <= n; ++i)
//     {
//         cout << "Enter n" << i << ": ";
//         cin >> num;
        
//         if(num < 0.0)
//         {
            
            
//            // Control of the program move to jump:
//             goto jump;
//         } 
//         sum += num;
        
//     }
    
// jump:
//     cout<<"value of i "<<i<<endl;
//     cout<<"val of sum "<<sum<<endl<<endl;
//     average = sum / (i - 1);
//     cout << "\nAverage = " << average;

// return 0;
// }



















#include <iostream>
using namespace std;


int main(){


float num , avrage , sum=0.0;

int  i , n;

cout<<"enter maximun runtime number ";
cin >>n;

for (i=1; i<=n;i++){
    cout<<"Enter number"<<i<<" ";
    cin>>num;
    if (num<0.0){
        goto ave;
    }
    sum+=num;
}

ave:
avrage= sum/(i-1);
cout<<"average "<<avrage;

return 0;
}