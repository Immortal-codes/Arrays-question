#include<iostream>
#include<algorithm>

using namespace std;

int main()

{
    int arr[]={1, 8, 7, 56, 90};
    int i;
    int n=5;
    sort(arr,arr+n);
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr[n-1];
    
}