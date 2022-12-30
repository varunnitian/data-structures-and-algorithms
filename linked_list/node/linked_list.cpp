#include<bits\stdc++.h>
#include "node.cpp"
using namespace std;
// node<int> *deletenode(node<int> *head,int position){
//     if (position==0)
//     {
//         node<int> *temp=head->next;
//         delete head;
//         return head->next;
//     }
//     node<int> *prevnode=head;
//     while (position!=1)
//     {
//         prevnode=prevnode->next;
//         position--;
//     }
//     node<int>*temp=prevnode->next;
//     prevnode->next=prevnode->next->next;
//     delete temp;
//     return head;
    
// }
node<int> *takellinput(){
    node<int> *head=NULL;
    node<int> *tail=NULL;
    int data;
    cin>>data;
    while (data!=-1)
    {
        node<int> *newnode=new node<int>(data);
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
// node<int> *mid(node<int> *head){
//     if (head==NULL)
//     {
//         return NULL;
//     }
    
//     node<int> *slow=head;
//     node<int> *fast=head->next;
//     while (fast!=NULL && fast->next!=NULL)
//     {
//         slow=slow->next;
//         fast=fast->next->next;
//     }
//     return slow;
// }
node<int> *reverseiteration(node<int> *head){
node<int> *prev=NULL;
node<int> *curr=head;
node<int> *temp=NULL;
while (curr!=NULL)
{
    temp->next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
}
return prev;
}
// node<int> *reverserecursion(node<int> *head){
// if (head==NULL || head->next=NULL)
// {
//     return head;
// }
// node<int>* reversehead=reverserecursion(head->next);
// head->next->next=head;
// head->next=NULL;
// return reversehead;
// }
// node<int> *insert(node<int> *head,int tobeinserted,int position){
// node<int> *newnode=new node<int>(tobeinserted);
// if (position==0)
// {
//     newnode->next=head;
//     return newnode;
// }
// node<int> *prevnode=head;
// while (position!=1)
// {
//     prevnode=prevnode->next;
//     position--;
// }
// newnode->next=prevnode->next;
// prevnode->next=newnode;
// return head;
// }
void print(node<int> *head){
while (head!=NULL)
{
    cout<<head->data<<endl;
    head=head->next;
}
}
// int lengthitr(node<int> *head){
//     if(head==NULL)
//     {
//         return 0;
//     }
//     int count=0;
//     while (head!=NULL)
//     {
//         head=head->next;
//         count++;
//     }
//     return count;
// }
// int lengthrecursion(node<int> *head){
//     if(head==NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1+lengthrecursion(head=head->next);
//     }
// }
node<int> *reversekelements(node<int> *head,int k){
node<int> *prev=NULL;
node<int> *curr=head;
node<int> *temp=NULL;
int count=0;
while (count< k && curr!=NULL)
{
    temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    count++;
}
if (temp!=NULL)
{
    head->next=reversekelements(temp,k);
}
return prev;
}
void removeloop(node<int> *head,node<int>*slow){
while (1==1)
{
    if(head->next==slow->next){
        slow->next=NULL;
        break;
    }
    head=head->next;
    slow=slow->next;
}

}
bool detectandremoveloop(node<int> *head){
    node<int> *slow=head;
    node<int> *fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"loop found"<<endl;
            removeloop(head,slow);
            return true;
        }
    }
   return false; 
}
int main(){
node<int> *head=new node<int>(10);
head->next=new node<int>(20);
head->next->next=new node<int>(30);
head->next->next->next=new node<int>(40);
head->next->next->next->next=head->next;
// insert(head,50,2);
// head=deletenode(head,2);
// node<int> *midnode=mid(head);
// cout<<midnode->data<<endl;
// node<int> *reversehead=reverserecursion(head);
// print(reversehead);
// int length=lengthitr(head);
// cout<<length<<endl;
// node<int> *head=takellinput();
// node<int> *reversehead=reversekelements(head,3);
// print(reversehead);
cout<<detectandremoveloop(head)<<endl;
print(head);
}