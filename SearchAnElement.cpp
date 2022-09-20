#include<iostream>

using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    int i;
    int count=4;
    int x=6;
    int k=0;

    for ( i = 0; i < count; i++)
    {
        if (x==arr[i])
        {
            k++;
        }
        
    }
    if (k>0)
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    
}