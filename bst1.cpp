#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
  int data;
  struct node *left,*right;
}*root=NULL;


struct node *newNode(int d)
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=d;
  temp->left=NULL;
  temp->right=NULL;

  return temp;
}


struct node *insert(struct node *node,int x)
{

if(node==NULL)
  {
    return newNode(x);
  }
if(x < node->data)
{
 node->left =insert(node->left,x);
}
else if(x > node->data)
{
  node->right=insert(node->right,x);
}

return node;

}

void print(struct node *root)
{
  if(root!=NULL)
  {
    print(root->left);
    cout<<root->data<<endl;
    print(root->right);
  }
}


int main()
{
int i,n,temp;

cout<<"Enter number of elements to be entered"<<endl;
cin>>n;



for(i=0;i<n;i++)
{
  if(i==0)
  {
    cin>>temp;
    root=insert(root,temp);
  }
  else
  {   cin>>temp;
      insert(root,temp);
  }
}


print(root);

  return 0;
}
