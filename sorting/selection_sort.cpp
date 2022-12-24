#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{   
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[index])
            {
            index=j;
            }
        }
        int temp=arr[index];
            arr[index]=arr[i];
            arr[i]=temp;
    }
}
int main()
{
    int arr[]={6,3,8,2,7};
    selectionsort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}