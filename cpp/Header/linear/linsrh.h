#include <iostream>
#include <D:\cpp\Header\showarr\arr.h>
using namespace std;

class linsrh
{
public:
    void showlin(int array_name[], int size_of_array, int search_array_value)
    {
        int i, pos = -1;

        arr show;
        show.printarr(array_name, size_of_array);

        for (i = 0; i < size_of_array; i++)
        {
            if (search_array_value == array_name[i])
            {
                pos = i + 1;
            }
        }
        if (pos == -1)
        {
            cout << "con't find " << endl;
        }
        else
        {
            cout << endl;
            cout << "indexing value is " << pos << endl;
            cout << "valus is  " << array_name[pos - 1] << endl;
        }
    };
};