#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
}*start=NULL;

void create(int d)
{
  struct node *newNode;
 newNode=(struct node*)malloc(sizeof(struct node));
 newNode->data=d;
 if(start==NULL)
 {
   newNode->next=NULL;
   start=newNode;
   cout<<newNode->data;
 }

 else
 {
   newNode->next=start;
   start=newNode;
   cout<<newNode->data;
 }
}


int main()
{

int n=5;
create(n++);
create(n);

  return 0;
}
