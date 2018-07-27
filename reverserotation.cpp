  
//Not working fully yet


#include<iostream>
using namespace std;

int main()
{
int i,n,r,a[100],b[100];
cin>>n;
for(i=0;i<n;i++)
{
  cin>>a[i];
}

cin>>r;

for(i=0;i<n;i++)
{
  b[(i-r)%n]=a[i];
}


for(i=0;i<n;i++)
{
  cout<<b[i]<<" ";
}


  return 0;
}
