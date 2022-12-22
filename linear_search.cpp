//code for linear search//
#include<iostream>
using namespace std;
int main()
{
 int n,i;
 cin>>n;
 int a[n];
 for( i=0;i<n;i++)
 {
     cin>>a[i];
 }
 int key,found=0;
 cout<<"Enter the element you want to search "<<endl;
 cin>>key;
 for(i=0;i<n;i++)
 {
if(key==a[i])
{
    cout<<"Element is found at index: "<<i<<endl;
    found=1;
    break;
}
}
if(i==n)
{
    cout<<"Element not found! "<<endl;
}
if(found==0){
    cout<<"data unavailable"<<endl;
}
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
    return 0;
}