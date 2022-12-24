#include<iostream>
using namespace std;
void bubblesort(int arr[],int n)
{   int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
         if(arr[j]>arr[j+1])  
         {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
        }
    }
}
int main()
{
    int arr[]={6,3,8,2,7};
    bubblesort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}