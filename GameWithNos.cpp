#include<iostream>
using namespace std;

int main()
{
    int arr[]={5, 9, 7, 6};
    
    int arr1[]={};
    int j=0;
    int m;

    for ( int i = 0; i < 4; i++)
    {
       arr[i]=arr[i]^arr[i+1];
       
       cout<<arr[i]<<endl;
    }

    
    
}