#include<iostream>
using namespace std;
int main(){
    int a[50],size,pos,item;
    cout<<"enter the size of array"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"from where you want to delete the item:"<<endl;
    cin>>pos;
    cout<<endl;
    if (pos<=0 || pos>size)
    {
        cout<<"Invalid position"<<endl;
    }
else
{
    item=a[pos-1];
    for (int i = pos-1; i < size-1; i++)
    {
        a[i]=a[i+1];
    }
    size--;
}
 for (int i = 0; i < size; i++)
 {
    cout<<a[i]<<endl;
 }
 cout<<"item deleted is :"<<item<<endl;
    return 0;
}