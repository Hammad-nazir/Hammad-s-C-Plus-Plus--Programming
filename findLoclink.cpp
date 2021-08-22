#include<iostream>
#include<stdlib.h>
using namespace std;
void create(int);
void Search();
struct Node
{
 int data;
 struct Node *next;
};
struct Node *head;
int main()
{
 int choice,item,Loc;
 do
 {
  cout<<"1-Create Node"<<endl;
  cout<<"2-Search Node"<<endl;
  cout<<"Enter your Choice"<<endl;
  cin>>choice;
  switch(choice)
  {
  case 1:
   cout<<"Enter your item:"<<endl;
   cin>>item;
   create(item);
   break;
  case 2:
   Search();
  case 3:
   exit(0);
  break;
  default:
   cout<<"Enter a Valid Choice:"<<endl;
  }
 }
 while(choice!=3);
}
void create(int item)
{
 struct Node *ptr=(struct Node *)malloc(sizeof(struct Node*));
 if(ptr==NULL)
 {
  cout<<"OVERFLOW"<<endl;
 }
 else{
  ptr->data=item;
  ptr->next=head;
  head=ptr;
  cout<<"Your New Node is Inserted"<<endl;
 }
}
void Search()
{
 struct Node *ptr;
 int item,i=0,flag;
 ptr=head;
 if(ptr==NULL)
 {
  cout<<"Your Linkedlist is Empty"<<endl;
 }
 else
 {
  cout<<"What is you want to search :"<<endl;
  cin>>item;
  while(ptr!=NULL)
  {
   if(ptr->data==item)
   {
    cout<<"Item found at"<<i+1;
    flag=0;
   }
   else
    {
     flag=1;
    }
    i++;
    ptr=ptr->next;
   }
   if(flag==1)
   {
    cout<<"Item doesn't Found"<<endl;
   }
  }

}
