#include<iostream>
using namespace std;
int main()
{  
    int arr[20]={2,3,4,5,6,7};
    int key;
    cout<<"Enter the number you want to search"<<endl;
    cin>>key;
    int i;
    for(i=0;i<20;i++)
    {
        if(arr[i]==key)
        {
            cout<<"number is found at index : "<<i<<endl;
        }
    }
    return 0;
}