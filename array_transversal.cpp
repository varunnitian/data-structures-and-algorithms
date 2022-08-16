#include<iostream>
using namespace std;
int main(){
    int a[50],size,num,pos;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter elements of an array:";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the elements you want to insert";
    cin>>num;
    cout<<"enter the position";
    cin>>pos;
    for(int i=size-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
    if(pos <= 0 || pos > size+1){
        cout<<"invalid position";
    }
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}