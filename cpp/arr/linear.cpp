#include <iostream>
using namespace std;

int main()
{

    int arr[4], i, pos = -1, search;

    // enter value
    for (i = 0; i < 5; i++)
    {
        cout << "enter a number :: ";
        cin >> arr[i];
    }
    for (i = 0; i < 5; i++)
        {
            cout << arr[i]<<endl;
            cout<<endl;
        }

    // search value
    cout << ":: search  data :: ";
    cin >> search;
    for (i = 0; i < 5; i++)
    {
        if (search == arr[i])
        {
            pos = i + 1;
            break;
        }
      
    }

    if (pos == -1)
    {
        cout << "the value is not exit" << endl;
    }
    else
    {
        // show data
        cout << ":: your data :: " << endl;
        cout<<pos<<endl;
        cout<<arr[pos-1]<<endl;
       
    }

    return 0;
}