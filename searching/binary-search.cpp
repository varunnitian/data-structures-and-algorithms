#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,4,5,6,7,8};
    int key;
    int f=0;
    int l=6;
    cout<<"enter the number you wanna enter:"<<endl;
    cin>>key;
    int m=(f+l)/2;
    while (f<=l)
    {
        if(arr[m]==key)
        {
            cout<<"number is found at index: "<<m<<endl;
            break;
        }
        else if(arr[m]<key)
        {
            f=m+1;
        }
        else
        {
            l=m-1;
        }
        m=(f+l)/2;
    }
    if(f>l)
    {
        cout<<"key is not found!"<<endl;
    }
    return 0;
}