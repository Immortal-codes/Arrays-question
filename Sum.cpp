#include <iostream>

using namespace std;

int main()
{

    int arr[] = {5, 3, 2, 4, 1};
    int n = 5;
    int count = 5;
    int i;
    int sum=0;
   sort(arr,arr+n);
    for (i = 0; i < count; i++)
    {
        sum=sum+(arr[i]*i);
        
    }
    cout<<sum;
}