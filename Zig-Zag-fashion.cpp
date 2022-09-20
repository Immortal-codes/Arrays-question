#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 4, 3, 2};
    int count = 4;
    int i;
    for (i = 0; i < count-1; i++)
    {
        if (i % 2 == 0)

        {

            if (arr[i + 1] < arr[i])

                swap(arr[i], arr[i + 1]);
        }

        else

        {

            if (arr[i + 1] > arr[i])

                swap(arr[i], arr[i + 1]);
        }
        cout << arr[i] << endl;
    }
    cout<<arr[count-1];
    
}
