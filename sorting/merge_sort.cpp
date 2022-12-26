#include<bits\stdc++.h>
#include<iostream>
using namespace std;
void merge(int arr[],int f,int m,int l){
    int oarr[l-f+1];
    int i=f;
    int j=m+1;
    int k=0;
    while (i<=m && j<=l)
    {
        if(arr[i]<arr[j])
        {
            oarr[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            oarr[k]=arr[j];
            j++;
            k++;
        }
    }
        while (i<=m)
        {
          oarr[k]=arr[i];
            i++;
            k++;  
        }
        while (j<=l)
        {
         oarr[k]=arr[j];
            j++;
            k++;   
        }
        int v=0;
        for(int i=f;i<=l;i++)
        {
            arr[i]=oarr[v];
            v++;
        }    
}
void mergesort(int arr[],int f,int l){
    if(f>=l){
        return;
    }
int m=(f+l)/2;
mergesort(arr,f,m);
mergesort(arr,m+1,l);
merge(arr,f,m,l);
}
int main()
{ 
    int arr[]={4,2,6,5,7,8};
    mergesort(arr,0,5);
  for(int i=0;i<6;i++)
  {
    cout<<arr[i]<<endl;
  }
return 0;
}