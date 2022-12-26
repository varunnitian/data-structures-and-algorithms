#include<bits\stdc++.h>
using namespace std;
int partition(int arr[],int f,int l)
{
int pn=arr[f];
int count=0;
for (int i = f; i < l; i++)
{
    if (arr[i]<pn)
    {
      count++;  
    }
}
int temp=arr[f];
arr[f]=arr[count+f];
arr[count+f]=temp;
int i=f;
int j=l;
while (i<j)
{
    if(arr[i]<pn)
    {
        i++;
    }
    else if (arr[j]>pn)
    {
        j--;
    }
    else{
    int temp2=arr[i];
    arr[i]=arr[j];
    arr[j]=temp2;
    i++;
    j--;
    }
}
return f+count;
}
void quicksort(int arr[],int f,int l)
{
    if(f>=l)
    {
        return ;
    }
    int piap=partition(arr,f,l);
    quicksort(arr,f,piap-1);
    quicksort(arr,piap+1,l);
}
int main()
{
int arr[]={3,5,4,2,6,1};
    quicksort(arr,0,5);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<endl;
  }
    return 0;
}