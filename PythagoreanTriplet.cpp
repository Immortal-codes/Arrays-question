#include <iostream>

using namespace std;

int main()
{
    int arr[] = {3, 2, 4, 6, 5};
    int n = 5;
    int i;
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    sort(arr, arr + n);

    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0;
        int r = i - 1;

        while (l < r)
        {
            if (arr[l] + arr[r] == arr[i])
                cout<<"yes";
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
            cout<<"no";
        }
    }

    
}