#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *next,*prev;
}*start=NULL;

void create(int d)
{
  struct node *newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=d;

  if(start==NULL)
  {
    newNode->next=NULL;
    newNode->prev=NULL;
    start=newNode;
  }
  else
  {
    newNode->next=start;
    start->prev=newNode;
    newNode->prev=NULL;
    start=newNode;

  }
}

void print()
{

struct node *temp;
temp=start;
while(temp->next!=NULL)
  {
      cout<<temp->data<<"->";
      temp=temp->next;
  }
  cout<<temp->data;
}


void printReverse()
{
  struct node *temp;
  temp=start;

  while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    while(temp->prev!=NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->prev;
    }
    cout<<temp->data;
}

void insertEnd(int d)
{
  struct node *temp,*newNode;
  temp=start;
  while(temp->next!=NULL)
    {
      temp=temp->next;
    }

newNode=(struct node*)malloc(sizeof(struct node));
newNode->data=d;
newNode->next=NULL;
temp->next=newNode;



}


int main()
{

int option=999,data;
  while(option!=0)
  {
    cin>>option;
    if(option==1)
      {
        cin>>data;
        create(data);
      }
      else if(option==0)
        {
          break;
        }
        else if(option==2)
        {
          print();
        }

  }
  print();
  cout<<endl;
  //printReverse();
  return 0;
}
