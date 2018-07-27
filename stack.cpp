#include<iostream>
using namespace std;

int maxSize;
int stackArray[1000000];
int top=-1;

bool isEmpty()
{
 return (top==-1);
}

bool isFull()
{
 return ((maxSize-1)==top);
}

/*void createStack(int size)
{
  stackArray[size];
  top=-1;
}*/

void push(int data)
{
  top++;
  stackArray[top]=data;
  //cout<<"Data Pushed :"<<data<<endl;
}

int pop()
{
  if(isEmpty==0)
  {
    cout<<"Empty"<<endl;
  }
  else
  {
  int old_pos=top;
  top--;
  return stackArray[old_pos];
}
}

int peak()
{
  return stackArray[top];
}



void print()
{
  int i=top;
  while(i!=-1)
  {
    cout<<stackArray[i--]<<endl;
  }
}

int main()
{
  cout<<"Enter max size: ";
  cin>>maxSize;
  //  createStack(maxSize);



  push(30);
  push(20);
  push(10);
  //print();
  pop();

  print();



return 0;
}
