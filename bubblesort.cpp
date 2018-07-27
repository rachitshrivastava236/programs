#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
  int i,j;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n-i-1;j++)
      {

        if(arr[j]>arr[j+1])
          {
            arr[j]=arr[j]+arr[j+1];
            arr[j+1]=arr[j]-arr[j+1];
            arr[j]=arr[j]-arr[j+1];


          }
      }
    }
}

int main()
{
  int n,arr[10000],i;
  cin>>n;
  for(i=0;i<n ;i++)
  {
    cin>>arr[i];
  }

    bubblesort(arr,n);

    for(i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }

  return 0;
}
