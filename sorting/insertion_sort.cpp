#include<iostream>
using namespace std;
void insertionsort(int arr[],int n)
{   
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
{
    int arr[]={6,3,8,2,7};
    insertionsort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}