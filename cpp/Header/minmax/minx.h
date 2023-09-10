#include <iostream>

class minx{
    public:
    void min_max(int array[], int size_of_array){
    int max , min , i;
    max = array[0];
    min = array[0];
    for(i=0; i<size_of_array;i++){
        if(max<array[i]){
            max=array[i];
        };
        if(min>array[i]){
            min=array[i];
        }

    }
    std::cout<<"minimum value is :: "<<min<<std::endl;;
    std::cout<<"maximum value is ::"<<max<<std::endl;

};
};