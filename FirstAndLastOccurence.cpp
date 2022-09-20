#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int arr1[]={};
    int x = 5;
    int i = 0;
    int j = 0;
    int n = 9;
    int k=0;
    


    for ( i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            arr1[j]=i;
            //cout<<i<<" ";
            j++;
            
            
        }
       
       
   
    }
    cout<<arr1[0]<<endl;
        cout<<arr1[j-1];
     
     
    
    
    
}
