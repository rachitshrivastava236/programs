#include<iostream>
using namespace std;

int fibR[1000];

int n;

int fibo()
{

  fibR[0]=0;
  fibR[1]=1;
  int i;
  for(i=2;i<100;i++)
  {
    fibR[i]=fibR[i-1]+fibR[i-2];  
  }

  return 0;
}

int ansFibo(int res)
{
return fibR[res];
}


int main()
{
  fibo();
cin>>n;
int ans=ansFibo(n);
int i;
for(i=0;i<n;i++)
{
  cout<<fibR[i]<<" ";
}


  return 0;
}
