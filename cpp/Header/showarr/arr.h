#include <iostream>

class arr{
    public:
    void printarr(int array_variable_name[], int size_of_array){
        // give arr variable name 
        // give array size like 3,4,..
        for(int i=0; i<size_of_array; i++){
            std::cout<<array_variable_name[i]<<" ";
        };
    };


};